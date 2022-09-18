#include "weatherResponce.h"
#include <json/json.h>
#include <iostream>

namespace owm
{

std::ostream& operator<<(std::ostream& os, const weatherResponce& wr)
{
    //os << "{"+wr.weather+wr.wind+wr.main+wr.sys<<std::endl;
    os << "name: "+wr.name<<std::endl;
    os << "visibility: "+std::to_string(wr.visibility)<<std::endl;
    os << "rainHours: "+std::to_string(wr.rainHours)<<std::endl;
    os << "cloudCoverage: "+std::to_string(wr.cloudCoverage)<<std::endl;
    os << "dt: "+std::to_string(wr.dt)<<std::endl;
    os << "timezone: "+std::to_string(wr.timezone)<<std::endl;
    os << "id: "+std::to_string(wr.id)<<std::endl;
    os << "}"<<std::endl;
    return os;
}
weatherResponce::~weatherResponce()
{
}
weatherResponce::weatherResponce(Json::Value data)
{
    wind= windData {data["wind"]};
    main= mainData {data["main"]};
    sys= sysData {data["sys"]};
    for( unsigned int i = 0; i < sizeof(data["weather"]); i++ )
    {
        weatherCategory w{data["weather"][i]};
        weather.push_back(w);
    }
    name=data["name"].asString();
    visibility=data["visibility"].asInt();
    rainHours=data["rain"]["1h"].asInt();
    cloudCoverage=data["clouds"]["all"].asInt();
    dt=data["dt"].asInt();
    timezone=data["timezone"].asInt();
    id=data["id"].asInt();
}
}
