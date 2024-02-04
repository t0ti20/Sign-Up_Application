/*******************************************************************
 *  FILE DESCRIPTION
-----------------------
 *  Author: Khaled El-Sayed @t0ti20
 *  File: ./DataBase.hpp
 *  Date: January 30, 2024
 *  Description: This Is Logic File For SignUp Application DataBase Headder File
 *  Namespace Name: Records_Handler
 *  Class Name: Common,Record,Record_Manager
 *  (C) 2024 "@t0ti20". All rights reserved.
*******************************************************************/
#ifndef _DATABASE_HPP_
#define _DATABASE_HPP_
/******************************************************************/
/*****************************************
-----------     INCLUDES     -------------
*****************************************/
#include <boost/date_time/posix_time/posix_time_types.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/sources/severity_logger.hpp>
#include <boost/log/sources/record_ostream.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/support/date_time.hpp>
#include <algorithm>
#include <iostream>
#include <vector>

/*****************************************
--------     Configurations     ----------
*****************************************/
constexpr size_t TOTAL_RECORDS{4};
constexpr int32_t DEFAULT_AGE{255};
constexpr int32_t DEFAULT_ID{1234};
constexpr const char* DEFAULT_NAME{"Default Name"};
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
namespace Records_Handler
{
using namespace boost::log::trivial;
enum class Console_Color{Default,Yellow,Blue,Red,Green};
enum Severity_Level{Trace,Debug,Info,Warning,Error,Fatal};
/*****************************************
---------    Logging Class     -----------
*****************************************/
class Logging
{ 
private:
     severity_level Level{trace};
     boost::log::sources::severity_logger<severity_level> Log;
public:
     Logging(void);
     ~Logging(void);
     void Logging_Set_Level(severity_level Level);
     void Logging_Message(const char* Message);
     void operator<<(const char* Message);
};
/*****************************************
----------    Common Class     -----------
*****************************************/
class Common
{
private:
     Console_Color Current_Color{Console_Color::Default};
public:
/*****************************************************************************************
* Function Name   : Common::Set_Color
* Description     : Sets the console text color for subsequent output.
* Parameters (in) : Color - The desired console color to be set.
* Parameters (out): None
* Return value    : None
* Notes           : The specified color will be used for subsequent console output until
*                   it is changed again.
*****************************************************************************************/
void Set_Color(Console_Color Color);
/*****************************************************************************************
* Function Name   : operator<<
* Description     : Overloaded insertion operator for printing colored messages to console.
* Parameters (in) : Message - The message to be printed.
* Parameters (out): None
* Return value    : None
* Notes           : The function sets the console text color based on the previously set
*                   color using Set_Color() and then prints the message with the chosen color.
*                   After printing, the console color is reset to the default.
*****************************************************************************************/
template <typename Type>
Common& operator<<(Type& Message)
{
     switch (Current_Color) 
     {
          case Console_Color::Default:
               std::cout<<Message;
          break;
          case Console_Color::Yellow:
               std::cout << "\033[1;33m" << Message << "\033[0m";
          break;
          case Console_Color::Blue:
               std::cout << "\033[1;34m" << Message << "\033[0m";
          break;
          case Console_Color::Red:
               std::cout << "\033[1;31m" << Message << "\033[0m";
          break;
          case Console_Color::Green:
               std::cout << "\033[1;32m" << Message << "\033[0m";
          break;
     }
     Current_Color=Console_Color::Default;
     return *this;
}
/*****************************************************************************************
* Function Name   : operator>>
* Description     : Overloaded extraction operator for reading input from the console.
* Parameters (in) : Input - The variable to store the read input.
* Parameters (out): None
* Return value    : None
* Notes           : Reads input from the console and stores it in the specified variable.
*****************************************************************************************/
template <typename Type> void operator>>(Type& Input)
{
     std::cin>>Input;
}
};
/*****************************************
----------    Record Class     -----------
*****************************************/    
class Record
{
protected:
public:
     std::string Name;
     uint32_t Age;
     uint32_t ID;
/*****************************************************************************************
* Constructor Name: Record::Record
* Description     : Initializes a new record with the provided information.
* Parameters (in) : Record_Name - The name of the record.
*                   Record_Age  - The age of the record.
*                   Record_ID   - The unique identifier of the record.
* Parameters (out): None
* Return value    : None
* Notes           : None
*****************************************************************************************/
Record(const std::string& Record_Name=std::string{DEFAULT_NAME}, uint32_t Record_Age=DEFAULT_AGE,uint32_t Record_ID=DEFAULT_ID);
/*****************************************************************************************
* Function Name   : Record::Print_Record
* Description     : Prints details of a user record.
* Parameters (in) : User_Record - The record to be printed.
* Parameters (out): None
* Return value    : None
* Notes           : If the user record has the default ID, an error message is printed.
*****************************************************************************************/
void Print_Record(Record User_Record);
};
/*****************************************
-------    Record Manager Class    -------
*****************************************/  
class Record_Manager : public Record
{
private:
     std::vector<Record> All_Records;
public:
/*****************************************************************************************
* Function Name   : Record_Manager::Print_All_Records
* Description     : Prints details of all records in the Record Manager.
* Parameters (in) : None
* Parameters (out): None
* Return value    : None
* Notes           : Iterates through all records and prints each record using Print_Record.
*****************************************************************************************/
void Print_All_Records(void);
/*****************************************************************************************
* Function Name   : Record_Manager::Fetch_Record
* Description     : Retrieves a record from the Record Manager based on the provided User_ID.
* Parameters (in) : User_ID - The unique identifier of the user whose record is to be fetched.
* Parameters (out): None
* Return value    : A Record object containing the details of the fetched user.
* Notes           : If the user with the specified User_ID is not found, an empty Record 
*                   object is returned.
*****************************************************************************************/
Record Fetch_Record(uint32_t User_ID);
/*****************************************************************************************
* Function Name   : Record_Manager::Add_Record
* Description     : Adds a new record to the Record Manager.
* Parameters (in) : User_Record - The record to be added.
* Parameters (out): None
* Return value    : None
* Notes           : If the total number of records reaches the maximum limit, an error
*                   message is printed, and the record is not added.
*****************************************************************************************/
void Add_Record(Record User_Record);
};
}
/********************************************************************
 *  END OF FILE:  ./DataBase.hpp
********************************************************************/
#endif
