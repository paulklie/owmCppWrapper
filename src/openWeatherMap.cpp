#include <weatherResponce.h>
#include "openWeatherMap.h"
#include <stdexcept>
#include <exception>
#include <iostream>
#include <curl/curl.h>
#include <string>
#include <responceData.h>
#include <forcastResponce.h>
#include <weatherCategory.h>
#include <windData.h>
#include <mainData.h>
#include <sysData.h>
#include <json/json.h>
#define API_URL "https://api.openweathermap.org/data/2.5/"
namespace owm
{
static size_t outputCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}
openWeatherMap::openWeatherMap(std::string key)
{
    apiKey=key;
    if(apiKey=="")
        throw std::invalid_argument( "API Key empty" );
    openWeatherMap::curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, outputCallback);
}

weatherResponce openWeatherMap::getCurrentWeather(float latitude, float longitude)
{
    std::string path = API_URL"/weather?lat="+std::to_string(latitude)+"&lon="+std::to_string(longitude)+"&appid="+apiKey;
    auto parsedJson = openWeatherMap::apiCall(path);
    owm::weatherResponce wR{parsedJson};
    return wR;
}
forcastResponce openWeatherMap::fiveDayForecast(float latitude, float longitude, int limit)
{
    std::string path = API_URL"/forecast?lat="+std::to_string(latitude)+"&lon="+std::to_string(longitude)+"&appid="+apiKey+"&cnt="+std::to_string(limit);
    auto parsedJson = openWeatherMap::apiCall(path);
    owm::forcastResponce wR{parsedJson};
    return wR;
}
Json::Value openWeatherMap::apiCall(std::string path)
{
    std::string output;
    curl_easy_setopt(openWeatherMap::curl, CURLOPT_URL, path.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &output);
    curl_easy_perform(openWeatherMap::curl);
    curl_easy_perform(curl);
    long httpCode(-1);
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &httpCode);
    if(httpCode==200)
    {
        Json::Value parsedJson;
        JSONCPP_STRING errorString;
        Json::CharReaderBuilder builder;
        const std::unique_ptr<Json::CharReader> reader(builder.newCharReader());
        if (!reader->parse(output.c_str(), output.c_str() + static_cast<int>(output.length()), &parsedJson,
                           &errorString))
        {
            throw std::runtime_error("JSON parsing failed: "+errorString);
        }

        return parsedJson;
    }
    else
        throw std::runtime_error("API returned error: "+std::to_string(httpCode));

}
openWeatherMap::~openWeatherMap()
{
    curl_easy_cleanup(curl);
}

}
