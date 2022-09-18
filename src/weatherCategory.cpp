#include "weatherCategory.h"
#include <json/json.h>
#include <iostream>

namespace owm
{
weatherCategory::~weatherCategory() {}
std::ostream& operator<<(std::ostream& os, const weatherCategory& wr)
{
    os << "{"<<std::endl;
    os << "icon: "+wr.icon<<std::endl;
    os << "main: "+wr.main<<std::endl;
    os << "id: "+std::to_string(wr.id)<<std::endl;
    os << "description: "+wr.description<<std::endl;
    os << "}"<<std::endl;
    return os;
}
weatherCategory::weatherCategory(Json::Value data)
{
    icon=data["icon"].asString();
    main=data["main"].asString();
    id=data["id"].asInt();
    description=data["description"].asString();
}
}
