/*******************************************************************
 *  FILE DESCRIPTION
-----------------------
 *  Author: Khaled El-Sayed @t0ti20
 *  File: ./Math.hpp
 *  Date: January 02, 2024
 *  Description: This Is Default Test File For CPP Generator
 *  Namespace Name: Records_Handler
 *  (C) 2024 "@t0ti20". All rights reserved.
*******************************************************************/
#ifndef _DATABASE_HPP_
#define _DATABASE_HPP_
/******************************************************************/
/*****************************************
-----------     INCLUDES     -------------
*****************************************/
#include <iostream>
#include <vector>
/*****************************************
--------     Configurations     ----------
*****************************************/
constexpr size_t TOTAL_RECORDS{100};
constexpr int32_t DEFAULT_AGE{255};
constexpr const char* DEFAULT_NAME{"Default Name"};
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
namespace Records_Handler
{
/*****************************************
----------    Common Class     -----------
*****************************************/  
class Common
{
public:
/*****************************************************************************************
* Function Name   : Record::Record(const std::string& Record_Name, uint32_t Record_Age)
* Description     : Default Instrctor For Record Class Creating New Record
* Parameters (in) : New Record Name - New Record_Age.
* Parameters (out): None
* Return value    : None
* Notes           : -This Is Default Instructor
*****************************************************************************************/
template <typename Type>
void operator<<(Type& Message){std::cout<<Message;}
};
/*****************************************
----------    Record Class     -----------
*****************************************/    
class Record
{
private:
     std::string Name;
     uint32_t Age;
public:
/*****************************************************************************************
* Function Name   : Record::Record(const std::string& Record_Name, uint32_t Record_Age)
* Description     : Default Instrctor For Record Class Creating New Record
* Parameters (in) : New Record Name - New Record_Age.
* Parameters (out): None
* Return value    : None
* Notes           : -This Is Default Instructor
*****************************************************************************************/
Record(const std::string& Record_Name=std::string{DEFAULT_NAME}, uint32_t Record_Age=DEFAULT_AGE);
};
/*****************************************
-------    Record Manager Class    -------
*****************************************/  
class Record_Manager : protected Common
{
private:
     std::vector<Record> All_Records;
public:
/*****************************************************************************************
* Function Name   : Record::Record(const std::string& Record_Name, uint32_t Record_Age)
* Description     : Default Instrctor For Record Class Creating New Record
* Parameters (in) : New Record Name - New Record_Age.
* Parameters (out): None
* Return value    : None
* Notes           : -This Is Default Instructor
*****************************************************************************************/
Record Fetch_Record(uint32_t User_ID);
/*****************************************************************************************
* Function Name   : Record::Record(const std::string& Record_Name, uint32_t Record_Age)
* Description     : Default Instrctor For Record Class Creating New Record
* Parameters (in) : New Record Name - New Record_Age.
* Parameters (out): None
* Return value    : None
* Notes           : -This Is Default Instructor
*****************************************************************************************/
void Add_Record(const std::string& Record_Name, uint32_t Record_Age);
};
}
/********************************************************************
 *  END OF FILE:  ./DataBase.hpp
********************************************************************/
#endif
