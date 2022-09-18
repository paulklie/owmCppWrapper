#include "cityData.h"
namespace owm
{
cityData::cityData(Json::Value data)
{
    id=data["id"].asInt();
    name=data["name"].asString();
    timezone=data["timezone"].asInt();
    sunrise=data["sunrise"].asInt();
    sunset=data["sunset"].asInt();
    country=data["country"].asString();}

cityData::~cityData()
{
}
cityData::cityData()
{
}
}
