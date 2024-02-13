#Set Version
cmake_minimum_required(VERSION 3.22)
#Set Project Name   
PROJECT(Test_CPP VERSION 22.22)
#Set CPP Standard
set(CMAKE_CXX_STANDARD 20)
#Find Needed Package For This Project
find_package(GTest REQUIRED)
#Enable G-Test
enable_testing()
#Locate Source Files
set(SRC_FILES "./Source/DataBase.cpp")
set(SRC_TEST "./Source/DataBase_Test.cpp")
#Add Executable
set(Application_Name "Main")
add_executable(${Application_Name} ${SRC_FILES} ${SRC_TEST})
message(STATUS "Files To Be Compiled : ${SRC_FILES}")
#Adding Boost Library
find_package(Boost REQUIRED COMPONENTS log)
if(Boost_FOUND)
    # Print Boost version
    message(STATUS "Boost Log Library Found at: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost version: ${Boost_VERSION}")
    target_include_directories(${Application_Name} PUBLIC ${Boost_INCLUDE_DIRS})
    include_directories(${Boost_INCLUDE_DIRS})
    #Link Gtest While Compiling
    target_link_libraries(${Application_Name} PUBLIC ${Boost_LIBRARIES} GTest::gtest GTest::gmock_main)
endif()
#Include Google Test
include (GoogleTest)
gtest_discover_tests(${Application_Name})