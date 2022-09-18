# omwCppWrapper
## A Wrapper for the openweathermap API.
Functions as a wrapper, for more easy access to the api. Not threadsafe!
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
### Running in code::blocks
omwCppWrapper was developed with the [code::blocks](https://www.codeblocks.org/) ide. Thus opening the project files with code::blocks suffices to compile and run the project.
### A makefile is also provided to run without code::blocks.

## Usage
The Example folder contains an example of how the wrapper can be used. The "release" build options included in code::blocks automaticly run this example.
```
make release
./bin/Release/owmCppWrapper 
```

## Testing
Running the "debug" version of the code::blocks project runs the tests included in /src/tests.cpp
For this however the api key needs to be pasted in the /src/tests.cpp
```
make
./bin/Debug/owmCppWrapper 
```

## Dependencies
Currently json-cpp and catc2 are directly included, you can find there respective repos here:
https://github.com/open-source-parsers/jsoncpp
https://github.com/catchorg/Catch2
