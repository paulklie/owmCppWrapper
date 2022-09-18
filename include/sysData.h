#ifndef SYSDATA_H
#define SYSDATA_H

#include <responceData.h>

namespace owm
{
class sysData
{
public:
    int sunrise;
// Sunrise time, unix, UTC
    int sunset;
// Sunset time, unix, UTC
    std::string country;
//Country code (GB, JP etc.)

    sysData(Json::Value data);
    sysData();
    ~sysData();
};
}
#endif // SYSDATA_H
