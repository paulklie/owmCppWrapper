#ifndef CITYDATA_H
#define CITYDATA_H

#include <responceData.h>
#include <string>

namespace owm
{
class cityData
{
public:
//OWM cityID
    int id;

// City name
    std::string name;

// Country code (GB, JP etc.)
    std::string country;

// Shift in seconds from UTC
    int timezone;

// Sunrise time, Unix, UTC
    int sunrise;

//  Sunset time, Unix, UTC
    int sunset;


    cityData(Json::Value data);
    virtual ~cityData();
    cityData();
};
}
#endif // CITYDATA_H
