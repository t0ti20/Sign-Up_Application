/*******************************************************************
 *  FILE DESCRIPTION
-----------------------
 *  Author: Khaled El-Sayed @t0ti20
 *  File: ./Signup.cpp
 *  Date: January 30, 2024
 *  Description: Interface File For Signup-Application
 *  Namespace: Application
 *  Class Name: Sign_Up
 *  (C) 2023 "@t0ti20". All rights reserved.
*******************************************************************/
/*****************************************
-----------     INCLUDES     -------------
*****************************************/
#include "Signup.hpp"
#include "DataBase.hpp"
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
namespace Application
{
using namespace Records_Handler;
Record_Manager DataBase;
Common Console_Print;
/*****************************************************************************************
* Function Name   : Record::Record(const std::string& Record_Name, uint32_t Record_Age)
* Description     : Default Instrctor For Record Class Creating New Record
* Parameters (in) : New Record Name - New Record_Age.
* Parameters (out): None
* Return value    : None
* Notes           : -This Is Default Instructor
*****************************************************************************************/
Sign_Up::Sign_Up()
{
     Console_Print.Set_Color(Console_Color::Green);
     Console_Print<<"============== Welcome To My Application ==============\n";
}
/*****************************************************************************************
* Function Name   : Record::Record(const std::string& Record_Name, uint32_t Record_Age)
* Description     : Default Instrctor For Record Class Creating New Record
* Parameters (in) : New Record Name - New Record_Age.
* Parameters (out): None
* Return value    : None
* Notes           : -This Is Default Instructor
*****************************************************************************************/
Sign_Up::~Sign_Up()
{
     Console_Print.Set_Color(Console_Color::Green);
     Console_Print<<"============== Thanks For Using My Application ==============\n";
}
/*****************************************************************************************
* Function Name   : Record::Record(const std::string& Record_Name, uint32_t Record_Age)
* Description     : Default Instrctor For Record Class Creating New Record
* Parameters (in) : New Record Name - New Record_Age.
* Parameters (out): None
* Return value    : None
* Notes           : -This Is Default Instructor
*****************************************************************************************/
Common& operator>>(Common& Console, Choice_Menu& Choice)
{
    u_int8_t Value;
    Console >> Value;
    Value-='1';
    Choice = static_cast<Choice_Menu>(Value);
    return Console;
}
/*****************************************************************************************
* Function Name   : Record::Record(const std::string& Record_Name, uint32_t Record_Age)
* Description     : Default Instrctor For Record Class Creating New Record
* Parameters (in) : New Record Name - New Record_Age.
* Parameters (out): None
* Return value    : None
* Notes           : -This Is Default Instructor
*****************************************************************************************/
void Sign_Up::Main_InterFace(void)
{
     Choice_Menu Choice{};
     bool Flag{true};
     Record User_Record{};
     while(Flag)
     {    
          Console_Print.Set_Color(Console_Color::Blue);
          Console_Print<<"1) Add Record .\n2) Fetch Record .\n3) Print All Records .\n4) Quit .\n";
          Console_Print.Set_Color(Console_Color::Yellow);
          Console_Print<<"- Please Select An Option : ";Console_Print>>Choice;
          switch (Choice)
          {
               case Choice_Menu::Add_Record:
                    Console_Print<<"Please Enter ID : ";
                    Console_Print>>User_Record.ID;
                    Console_Print<<"Please Enter Name : ";
                    Console_Print>>User_Record.Name;
                    Console_Print<<"Please Enter Age : ";
                    Console_Print>>User_Record.Age;
                    DataBase.Add_Record(User_Record);
               break;
               case Choice_Menu::Fetch_Record:
                    Console_Print<<"Please Enter ID : ";
                    Console_Print>>User_Record.ID;
                    DataBase.Print_Record(DataBase.Fetch_Record(User_Record.ID));
               break;
               case Choice_Menu::Print_Records:
                    DataBase.Print_All_Records();
               break;
               case Choice_Menu::Quit:
                    Console_Print<<"Quit\n";
                    Flag=false;
               break;
               default:
               break;
          }
          Console_Print<<"=============================================================\n";
     }
}
}
/********************************************************************
 *  END OF FILE:  Signup.cpp
********************************************************************/
