#include "windData.h"
#include <json/json.h>
namespace owm
{
windData::~windData() {}
windData::windData() {}

windData::windData(Json::Value data)
{

    speed=data["speed"].asFloat();
    deg=data["deg"].asInt();
    gust=data["gust"].asFloat();

}
}
