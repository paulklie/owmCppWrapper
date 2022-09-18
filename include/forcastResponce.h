#ifndef FORCASTRESPONCE_H
#define FORCASTRESPONCE_H
#include <weatherResponce.h>
#include <responceData.h>
#include <cityData.h>
namespace owm
{

class forcastResponce
{
    public:
        forcastResponce(Json::Value data);
        virtual ~forcastResponce();
        std::vector<weatherResponce> weather;
        cityData city;
};
}
#endif // FORCASTRESPONCE_H
