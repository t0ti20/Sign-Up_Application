/*******************************************************************
 *  FILE DESCRIPTION
-----------------------
 *  Author: Khaled El-Sayed @t0ti20
 *  File: ./DataBase.cpp
 *  Date: January 30, 2024
 *  Description: This Is Logic File For SignUp Application DataBase
 *  Namespace Name: Records_Handler
 *  Class Name: Common,Record,Record_Manager
 *  (C) 2024 "@t0ti20". All rights reserved.
*******************************************************************/
/*****************************************
-----------     INCLUDES     -------------
*****************************************/
#include "DataBase.hpp"
#include <algorithm> 
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
namespace Records_Handler
{
using namespace std;
Common Console_Print;
/*****************************************
----------    Common Class     -----------
*****************************************/  
/*****************************************************************************************
* Function Name   : Common::Set_Color
* Description     : Sets the console text color for subsequent output.
* Parameters (in) : Color - The desired console color to be set.
* Parameters (out): None
* Return value    : None
* Notes           : The specified color will be used for subsequent console output until
*                   it is changed again.
*****************************************************************************************/
void Common::Set_Color(Console_Color Color)
{
     Current_Color=Color;
}
/*****************************************
----------    Record Class     -----------
*****************************************/  
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
Record::Record(const std::string& Record_Name,uint32_t Record_Age,uint32_t Record_ID):Name(Record_Name),Age(Record_Age),ID(Record_ID)
{
     /*DONE*/
}
/*****************************************************************************************
* Function Name   : Record::Print_Record
* Description     : Prints details of a user record.
* Parameters (in) : User_Record - The record to be printed.
* Parameters (out): None
* Return value    : None
* Notes           : If the user record has the default ID, an error message is printed.
*****************************************************************************************/
void Record::Print_Record(Record User_Record) 
{
     if (User_Record.ID==DEFAULT_ID) 
     {
          Console_Print.Set_Color(Console_Color::Red);
          Console_Print << "Invalid user ID. No record found.\n";
     } 
     else
     {
          Console_Print<<"------------------------------------\n";
          Console_Print.Set_Color(Console_Color::Yellow);
          Console_Print<<"Record ID : ";
          Console_Print<<User_Record.ID;
          Console_Print.Set_Color(Console_Color::Yellow);
          Console_Print<<"\nRecord Name : ";
          Console_Print<<User_Record.Name;
          Console_Print.Set_Color(Console_Color::Yellow);
          Console_Print<<"\nRecord Age : ";
          Console_Print<<User_Record.Age;
          Console_Print<<"\n";
     }
}
/*****************************************
-------    Record Manager Class    -------
*****************************************/ 
/*****************************************************************************************
* Function Name   : Record_Manager::Add_Record
* Description     : Adds a new record to the Record Manager.
* Parameters (in) : User_Record - The record to be added.
* Parameters (out): None
* Return value    : None
* Notes           : If the total number of records reaches the maximum limit, an error
*                   message is printed, and the record is not added.
*****************************************************************************************/
void Record_Manager::Add_Record(Record User_Record) 
{
     if (All_Records.size()<TOTAL_RECORDS) 
     {
          Console_Print.Set_Color(Console_Color::Green);
          All_Records.push_back(User_Record);
          Console_Print<<"Record Added Successfully.\n";
     } 
     else
     {
          Console_Print.Set_Color(Console_Color::Red);
          Console_Print << "Cannot add more records. Maximum limit reached.\n";
     }
}
/*****************************************************************************************
* Function Name   : Record_Manager::Fetch_Record
* Description     : Retrieves a record from the Record Manager based on the provided User_ID.
* Parameters (in) : User_ID - The unique identifier of the user whose record is to be fetched.
* Parameters (out): None
* Return value    : A Record object containing the details of the fetched user.
* Notes           : If the user with the specified User_ID is not found, an empty Record 
*                   object is returned.
*****************************************************************************************/
Record Record_Manager::Fetch_Record(uint32_t User_ID) 
{
     vector<Record>::iterator Counter;
     Record Nedded_Record{};
     Counter= std::find_if
     (
          All_Records.begin(),
          All_Records.end(),
          [User_ID](const Record& Current_Record) 
          {
               return Current_Record.ID == User_ID;
          }
     );
     if (Counter!=All_Records.end())
     {
          Nedded_Record=*Counter;
     }
     return Nedded_Record ;
}
/*****************************************************************************************
* Function Name   : Record_Manager::Print_All_Records
* Description     : Prints details of all records in the Record Manager.
* Parameters (in) : None
* Parameters (out): None
* Return value    : None
* Notes           : Iterates through all records and prints each record using Print_Record.
*****************************************************************************************/
void Record_Manager::Print_All_Records(void)
{
     for(size_t Counter{};Counter<All_Records.size();++Counter)
     {
          Print_Record(All_Records[Counter]);
     }
}
}
/********************************************************************
 *  END OF FILE:  ./DataBase.cpp
********************************************************************/
