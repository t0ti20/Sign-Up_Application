#Set Version
cmake_minimum_required(VERSION 3.12)
#Set Project Name
project(${Application_Name} VERSION 1.0)
#Building Message
message(STATUS "================== Building Library ==================")
#Set Application Name
SET(Application_Name "DataBase")
# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# Add Math library source files
file(GLOB_RECURSE SRC_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "./Source/*.cpp")
#Building Information Message
message(STATUS "Files To Be Compiled : ${SRC_FILES}")
# Create a Dynamic library
add_library(${Application_Name} SHARED ${SRC_FILES})
# Specify include directories for the library
target_include_directories(${Application_Name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Source)
#Done Building Message
message(STATUS "================== Done Building Library ==================")