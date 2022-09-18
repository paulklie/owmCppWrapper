#ifndef WEATHERRESPONCE_H
#define WEATHERRESPONCE_H
#include <responceData.h>
#include <weatherCategory.h>
#include <windData.h>
#include <mainData.h>
#include <sysData.h>
#include <json/json.h>
#include <vector>
namespace owm
{
class weatherResponce
{
public:
    ~weatherResponce();

    std::vector<weatherCategory> weather;
//General information on type of weather
    windData wind;
//Information about wind (speed, direction etc)
    mainData main;
//Temperature, Pressure, Humidity
    sysData sys;
//Misc data
    std::string name;
//City name
    int visibility;
//Visibility, meter. The maximum value of the visibility is 10km
    int rainHours;
// Rain volume for the last 1 hour, mm
    int cloudCoverage;
//Cloudiness, %
    int dt;
//Time of data calculation, unix, UTC
    int timezone;
// Shift in seconds from UTC
    int id;
//City ID

    weatherResponce(Json::Value data);

};
}
#endif // WEATHERRESPONCE_H
