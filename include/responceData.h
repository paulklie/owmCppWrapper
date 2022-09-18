#ifndef RESPONCEDATA_H
#define RESPONCEDATA_H
#include <json/json.h>
class responceData
{
    public:
        virtual void parse(Json::Value data)=0;
    private:
};

#endif // RESPONCEDATA_H
