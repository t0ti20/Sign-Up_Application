/*******************************************************************
 *  FILE DESCRIPTION
-----------------------
 *  Author: Khaled El-Sayed @t0ti20
 *  File: ./DataBase.cpp
 *  Date: January 19, 2024
 *  Description: This Is Logic File For SignUp Application DataBase
 *  Class Name: Records_Handler
 *  (C) 2024 "@t0ti20". All rights reserved.
*******************************************************************/
/*****************************************
-----------     INCLUDES     -------------
*****************************************/
#include "DataBase.hpp"
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
namespace Records_Handler
{
     Common Console_Print;
     using namespace std;
/*****************************************************************************************
* Function Name   : Record::Record(const std::string& Record_Name, uint32_t Record_Age)
* Description     : Default Instrctor For Record Class Creating New Record
* Parameters (in) : New Record Name - New Record_Age.
* Parameters (out): None
* Return value    : None
* Notes           : -This Is Default Instructor
*****************************************************************************************/
Record::Record(const std::string& Record_Name, uint32_t Record_Age):Name(Record_Name),Age(Record_Age)
{
     /*DONE*/
}
/*****************************************************************************************
* Function Name   : Record::Record(const std::string& Record_Name, uint32_t Record_Age)
* Description     : Default Instrctor For Record Class Creating New Record
* Parameters (in) : New Record Name - New Record_Age.
* Parameters (out): None
* Return value    : None
* Notes           : -This Is Default Instructor
*****************************************************************************************/
void Record_Manager::Add_Record(const std::string& Record_Name, uint32_t Record_Age) 
{
     if (All_Records.size()<TOTAL_RECORDS) 
     {
          Record New_Record(Record_Name, Record_Age);
          All_Records.push_back(New_Record);
          Console_Print << "Record added successfully.\n";
     } 
     else
     {
          Console_Print << "Cannot add more records. Maximum limit reached.\n";
     }
}
/*****************************************************************************************
* Function Name   : Record::Record(const std::string& Record_Name, uint32_t Record_Age)
* Description     : Default Instrctor For Record Class Creating New Record
* Parameters (in) : New Record Name - New Record_Age.
* Parameters (out): None
* Return value    : None
* Notes           : -This Is Default Instructor
*****************************************************************************************/
Record Record_Manager::Fetch_Record(uint32_t User_ID) 
{
     if ((User_ID>=0)&&(User_ID<=TOTAL_RECORDS)){return All_Records[User_ID];} 
     else {Console_Print << "Invalid user ID. No record found.\n";}
     return Record{};
}
}
/********************************************************************
 *  END OF FILE:  ./DataBase.cpp
********************************************************************/
