#include <testMain.h>
#include <catch_amalgamated.hpp>
#include <openWeatherMap.h>

TEST_CASE( "Factorial of 0 is 1 (fail)", "[single-file]" ) {
owm::openWeatherMap o("968f104c23a09268268694a609d40886");
    o.getCurrentWeather(57.71,11.97);

    REQUIRE( 1 == 1 );
}

