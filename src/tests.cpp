#include "tests.h"

#include <catch/catch_amalgamated.hpp>
#include <openWeatherMap.h>
#define API_KEY ""

TEST_CASE( "Ensuring API key is not empty" )
{
    REQUIRE(strcmp(API_KEY , "") );
}
TEST_CASE( "Test getCurrentWeather in Gothenburg" )
{
    owm::openWeatherMap o(API_KEY);
    auto weather = o.getCurrentWeather(57.7072326, 11.9670171);
    REQUIRE( weather.sys.country == "SE" );
    REQUIRE( weather.main.temp <=500 );
    REQUIRE( weather.visibility >=0 );
    REQUIRE( weather.timezone == 7200 );
    REQUIRE( weather.main.seaLevel == 0 );
    REQUIRE( weather.main.groundLevel == 0 );
    //REQUIRE( weather.main == "Rain" ); Lets be Honest.
}
TEST_CASE( "Test fiveDayForecast in Gothenburg" )
{
    owm::openWeatherMap o(API_KEY);
    auto forcast = o.fiveDayForecast(57.7072326, 11.9670171,2);
    REQUIRE( forcast.city.country == "SE" );
    REQUIRE( forcast.weather[0].wind.speed >= 0.0 );
    REQUIRE( forcast.weather[1].main.temp >= 100 );

}
