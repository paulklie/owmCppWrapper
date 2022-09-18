#------------------------------------------------------------------------------#
# This makefile was generated by 'cbp2make' tool rev.147                       #
#------------------------------------------------------------------------------#


WORKDIR = `pwd`

CC = gcc
CXX = g++
AR = ar
LD = g++
WINDRES = windres

INC = 
CFLAGS = -Wall -fexceptions
RESINC = 
LIBDIR = 
LIB = 
LDFLAGS = -lcurl

INC_RELEASE = $(INC) -Iinclude
CFLAGS_RELEASE = $(CFLAGS) -O2
RESINC_RELEASE = $(RESINC)
RCFLAGS_RELEASE = $(RCFLAGS)
LIBDIR_RELEASE = $(LIBDIR)
LIB_RELEASE = $(LIB)
LDFLAGS_RELEASE = $(LDFLAGS) -s
OBJDIR_RELEASE = obj/Release
DEP_RELEASE = 
OUT_RELEASE = bin/Release/owmCppWrapper

OBJ_RELEASE = $(OBJDIR_RELEASE)/src/windData.o $(OBJDIR_RELEASE)/src/weatherResponce.o $(OBJDIR_RELEASE)/src/weatherCategory.o $(OBJDIR_RELEASE)/src/sysData.o $(OBJDIR_RELEASE)/src/responceData.o $(OBJDIR_RELEASE)/src/openWeatherMap.o $(OBJDIR_RELEASE)/src/mainData.o $(OBJDIR_RELEASE)/src/forcastResponce.o $(OBJDIR_RELEASE)/src/cityData.o $(OBJDIR_RELEASE)/include/catch/catch_amalgamated.o $(OBJDIR_RELEASE)/include/jsoncpp.o

all: debug release

clean: clean_debug clean_release

before_release: 
	test -d bin/Release || mkdir -p bin/Release
	test -d $(OBJDIR_RELEASE)/src || mkdir -p $(OBJDIR_RELEASE)/src
	test -d $(OBJDIR_RELEASE)/include/catch || mkdir -p $(OBJDIR_RELEASE)/include/catch
	test -d $(OBJDIR_RELEASE)/include || mkdir -p $(OBJDIR_RELEASE)/include

after_release: 

release: before_release out_release after_release

out_release: before_release $(OBJ_RELEASE) $(DEP_RELEASE)
	$(LD) $(LIBDIR_RELEASE) -o $(OUT_RELEASE) $(OBJ_RELEASE)  $(LDFLAGS_RELEASE) $(LIB_RELEASE)

$(OBJDIR_RELEASE)/src/windData.o: src/windData.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/windData.cpp -o $(OBJDIR_RELEASE)/src/windData.o

$(OBJDIR_RELEASE)/src/weatherResponce.o: src/weatherResponce.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/weatherResponce.cpp -o $(OBJDIR_RELEASE)/src/weatherResponce.o

$(OBJDIR_RELEASE)/src/weatherCategory.o: src/weatherCategory.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/weatherCategory.cpp -o $(OBJDIR_RELEASE)/src/weatherCategory.o

$(OBJDIR_RELEASE)/src/sysData.o: src/sysData.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/sysData.cpp -o $(OBJDIR_RELEASE)/src/sysData.o

$(OBJDIR_RELEASE)/src/responceData.o: src/responceData.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/responceData.cpp -o $(OBJDIR_RELEASE)/src/responceData.o

$(OBJDIR_RELEASE)/src/openWeatherMap.o: src/openWeatherMap.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/openWeatherMap.cpp -o $(OBJDIR_RELEASE)/src/openWeatherMap.o

$(OBJDIR_RELEASE)/src/mainData.o: src/mainData.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/mainData.cpp -o $(OBJDIR_RELEASE)/src/mainData.o

$(OBJDIR_RELEASE)/src/forcastResponce.o: src/forcastResponce.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/forcastResponce.cpp -o $(OBJDIR_RELEASE)/src/forcastResponce.o

$(OBJDIR_RELEASE)/src/cityData.o: src/cityData.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/cityData.cpp -o $(OBJDIR_RELEASE)/src/cityData.o

$(OBJDIR_RELEASE)/include/catch/catch_amalgamated.o: include/catch/catch_amalgamated.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c include/catch/catch_amalgamated.cpp -o $(OBJDIR_RELEASE)/include/catch/catch_amalgamated.o

$(OBJDIR_RELEASE)/include/jsoncpp.o: include/jsoncpp.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c include/jsoncpp.cpp -o $(OBJDIR_RELEASE)/include/jsoncpp.o

clean_release: 
	rm -f $(OBJ_RELEASE) $(OUT_RELEASE)
	rm -rf bin/Release
	rm -rf $(OBJDIR_RELEASE)/src
	rm -rf $(OBJDIR_RELEASE)/include/catch
	rm -rf $(OBJDIR_RELEASE)/include

.PHONY: before_release after_release clean_release

