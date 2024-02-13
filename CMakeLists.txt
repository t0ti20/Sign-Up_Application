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
target_include_directories(${Application_Name} PUBLIC ${CMAKE_SOURCE_DIR}/Source/Signup/)
target_include_directories(${Application_Name} PUBLIC ${CMAKE_SOURCE_DIR}/Libraries/Source/)
target_include_directories(${Application_Name} PUBLIC ${PROJECT_BINARY_DIR})
#Find Doxygen Package
option(BUILD_DOC "Build documentation" ON)
find_package(Doxygen)
if (DOXYGEN_FOUND)
    # set input and output files
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/Documentation/Doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)
    # request to configure the file
    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
    message("Doxygen build started")
    # note the option ALL which allows to build the docs together with the application
    add_custom_target( doc_doxygen ALL
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        )
else (DOXYGEN_FOUND)
    message("Doxygen need to be installed to generate the doxygen documentation")
endif (DOXYGEN_FOUND)
#Select Building Files And Executable Name
add_subdirectory(${CMAKE_SOURCE_DIR}/Libraries)
#Pass Option To Compiler
target_compile_options(${Application_Name} PUBLIC -O0)
#Link Library
target_link_libraries(${Application_Name} PUBLIC DataBase)
#Add Configuration File
configure_file(Default_Config.in Default_Config.h)
#Done Building Message
message(STATUS "================== Done Building Application ==================")