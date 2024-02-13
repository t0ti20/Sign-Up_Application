#Set Version
cmake_minimum_required(VERSION 3.12)
#Set Application Name
SET(Application_Name "DataBase")
#Set Project Name
project(${Application_Name} VERSION 1.0)
#Building Message
message(STATUS "================== Building Library ==================")
# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# Add Math library source files
file(GLOB_RECURSE SRC_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "./Source/*.cpp" EXCLUDE "./Source/DataBase_Test.cpp")
list(REMOVE_ITEM SRC_FILES "Source/DataBase_Test.cpp")
#Building Information Message
message(STATUS "Files To Be Compiled : ${SRC_FILES}")
# Create a Dynamic library
add_library(${Application_Name} SHARED ${SRC_FILES})
# Specify include directories for the library
target_include_directories(${Application_Name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Source)
#Adding Boost Library
find_package(Boost REQUIRED COMPONENTS log)
if(Boost_FOUND)
    # Print Boost version
    message(STATUS "Boost Log Library Found at: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost version: ${Boost_VERSION}")
    target_include_directories(${Application_Name} PUBLIC ${Boost_INCLUDE_DIRS})
    include_directories(${Boost_INCLUDE_DIRS})
    target_link_libraries(${Application_Name} ${Boost_LIBRARIES})
endif()
#Done Building Message
message(STATUS "================== Done Building Library ==================")