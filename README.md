# omwCppWrapper
## A Wrapper for the openweathermap API.
Functions as a wrapper, for more easy access to the api.
https://openweathermap.org
Currently supports the following endpoints:
- Hourly forcast (https://openweathermap.org/api/hourly-forecast)
- Current Weather data (https://openweathermap.org/current)

## Installation
1. Grab create an account: https://home.openweathermap.org/users/sign_up
2. Copy your api key from https://home.openweathermap.org/api_keys
3. Clone the directory
4. Install curl + llvm. Example for most linux distros:
```
apt-get install curl llvm-[Insert version here]
```
5. omwCppWrapper was developed with the [code::blocks](https://www.codeblocks.org/) ide. Thus opening the project files with code::blocks suffices to compile and run the project.

## Testing
Running the "debug" version of the code::blocks project runs the tests included in /src/tests.cpp
For this however the api key needs to be pasted in the /src/tests.cpp

## Dependencies
Currently json-cpp and libcurl are directly included, you can find there respective repos here:
https://github.com/open-source-parsers/jsoncpp
https://curl.se/libcurl/c/
