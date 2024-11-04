cmake_minimum_required(VERSION 3.10)
project(Tuner)

set(CMAKE_CXX_STANDARD 17)

include_directories(src src/include src/tuner src/jni)
file(GLOB_RECURSE tuner_sources src/tuner/*.cpp src/jni/*.cpp)

add_executable(Tuner src/Tuner.cpp src/Demux.cpp src/Frontend.cpp src/Descrambler.cpp src/Lnb.cpp src/Filter.cpp src/Dvr.cpp src/TimeFilter.cpp src/service.cpp ${tuner_sources})