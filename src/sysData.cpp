#include "sysData.h"
#include <json/json.h>
namespace owm
{
sysData::~sysData()
{
}
sysData::sysData()
{
}
sysData::sysData(Json::Value data)
{
    sunrise=data["sunrise"].asInt();
    sunset=data["sunset"].asInt();
    country=data["country"].asString();
}
}
