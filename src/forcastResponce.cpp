#include "forcastResponce.h"
#include "vector"
#include <cityData.h>
#include <weatherResponce.h>
namespace owm
{
forcastResponce::forcastResponce(Json::Value data)
{
    city= cityData{data["city"]};
    for( unsigned int i = 0; i < sizeof(data["list"]); i++ )
    {
        auto a=data["list"][i];
        weatherResponce wR{a};
        weather.push_back(wR);
    }
}

forcastResponce::~forcastResponce()
{
    //dtor
}
}
