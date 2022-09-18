#ifndef OWM_H
#define OWM_H
#include <string>
#include <curl/curl.h>
#include <memory>
#include <weatherResponce.h>
#include <forcastResponce.h>
namespace owm
{
class openWeatherMap
{
public:
    openWeatherMap(std::string apiKey);
    openWeatherMap() = delete;
    ~openWeatherMap();

    /*
    Access current weather data for any location on Earth including over 200,000 cities!
    We collect and process weather data from different sources such as global and local weather models, satellites, radars and
    a vast network of weather stations.
    See: https://openweathermap.org/current
    */
    owm::weatherResponce getCurrentWeather(float latitude, float longitude);


    /*
    5 day forecast is available at any location on the globe. It includes weather forecast data with 3-hour step.
    limit: A number of timestamps, which will be returned in the API response.
    */
    forcastResponce fiveDayForecast(float latitude, float longitude, int limit);

private:
    std::string apiKey;
    CURL *curl;
    Json::Value apiCall(std::string path);
};
}
#endif // OWM_H
