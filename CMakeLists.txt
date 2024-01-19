#Set Version
cmake_minimum_required(VERSION 3.22)
#Set Project Name
project(Sign_Up VERSION 1.1)
#Building Application
message(STATUS "================== Building Application ==================")
#Search For CPP Files
file(GLOB_RECURSE SRC_FILES RELATIVE ${CMAKE_SOURCE_DIR} "./Source/*.cpp")
#Print Info Message
message(STATUS "Files To Be Compiled : ${SRC_FILES}")
#Add Include Directory
SET(Application_Name "Sign_Up")
add_executable(${Application_Name} ${SRC_FILES})
include_directories(${CMAKE_SOURCE_DIR}/Source/Company/)
target_include_directories(${Application_Name} PUBLIC ${CMAKE_SOURCE_DIR}/Source/Company/)
target_include_directories(${Application_Name} PUBLIC ${CMAKE_SOURCE_DIR}/Libraries/Source)
target_include_directories(${Application_Name} PUBLIC ${PROJECT_BINARY_DIR})
#Select Building Files And Executable Name
add_subdirectory(${CMAKE_SOURCE_DIR}/Libraries)
#Pass Defenition To Compiler cout<<name
target_compile_definitions(${Application_Name} PUBLIC "my_name=\"Khaled\"")
#Pass Option To Compiler
target_compile_options(${Application_Name} PUBLIC -O0)
#Link Library
target_link_libraries(${Application_Name} PUBLIC DataBase)
#Add Configuration File
configure_file(Default_Config.in Default_Config.h)
#Done Building Message
message(STATUS "================== Done Building Application ==================")