#ifndef WINDDATA_H
#define WINDDATA_H

#include <responceData.h>

namespace owm
{
class windData
{
public:
//Wind speed.
//Unit: meter/sec
    float speed;

//Wind direction, degrees (meteorological)
    int deg;

//Wind gust speed
//Unit: meter/sec
    float gust;

    windData(Json::Value data);
    windData();
    ~windData();
};
}
#endif // WINDDATA_H
