#ifndef WEATHERCATEGORY_H
#define WEATHERCATEGORY_H

#include <responceData.h>
#include <json/json.h>

namespace owm
{
class weatherCategory
{
public:
//Further information on the weather Conditions:
//https://openweathermap.org/weather-conditions

    int id;
//Weather condition id

    std::string description;
//Weather condition within the group. You can get the output in your language:
// https://openweathermap.org/current#multi

    std::string icon;
//Weather icon id

    std::string main;
//Group of weather parameters (Rain, Snow, Extreme etc.)

    ~weatherCategory();
    weatherCategory(Json::Value data);

};
}
#endif // WEATHERCATEGORY_H
