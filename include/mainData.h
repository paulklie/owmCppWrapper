#ifndef MAINDATA_H
#define MAINDATA_H

#include <responceData.h>
#include <json/json.h>

namespace owm
{
class mainData{
public:
    ~mainData();
    float temp;
//Temperature.
//Unit: Kelvin
    float feelsLike;
//Temperature. This temperature parameter accounts for the human perception of weather.
//Unit: Kelvin
    float tempMin;
//Minimum temperature at the moment. This is minimal currently observed temperature (within large megalopolises and urban areas).
//Unit: Kelvin
    float tempMax;
//Maximum temperature at the moment. This is maximal currently observed temperature (within large megalopolises and urban areas).
//Unit: Kelvin
    int pressure;
//Atmospheric pressure (on the sea level, if there is no seaLevel or grndLevel data)
//Unit: hPa
    int humidity;
//Humidity, %
    int seaLevel;
//Atmospheric pressure on the sea level
//Unit: hPa
    int groundLevel;
//Atmospheric pressure on the ground level
//Unit: hPa
    mainData(Json::Value data);
    mainData();
};
}
#endif // MAINDATA_H
