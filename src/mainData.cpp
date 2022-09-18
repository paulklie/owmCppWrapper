#include "mainData.h"
#include <json/json.h>
namespace owm
{
mainData::~mainData(){}
    mainData::mainData() {}
    mainData::mainData(Json::Value data)
{

     temp=data["temp"].asFloat();
     feelsLike=data["feels_like"].asFloat();
     tempMin=data["temp_min"].asFloat();
     tempMax=data["temp_max"].asFloat();
     pressure=data["pressure"].asInt();
     humidity=data["humidity"].asInt();
     seaLevel=data["sea_level"].asInt();
     groundLevel=data["grnd_level"].asInt();
}
}
