#include <openWeatherMap.h>
#include <iostream>
#define API_KEY ""

//Prints the current weather in gothenburg, remember to set the API key
int main() {
    owm::openWeatherMap o(API_KEY);
    auto weather = o.getCurrentWeather(57.7072326, 11.9670171);
    std::cout << weather.weather[0].main<<std::endl;
    return 0;
}
