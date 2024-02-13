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
* Constructor Name: Sign_Up::Sign_Up
* Description     : Constructor for the Sign_Up class that initializes the application.
* Parameters (in) : None
* Parameters (out): None
* Return value    : None
* Notes           : Initializes the application and prints a welcome message to the console.
*****************************************************************************************/
Sign_Up::Sign_Up()
{
     Console_Print.Set_Color(Console_Color::Green)<<"================= Welcome To My Application =================\n";
}
/*****************************************************************************************
* Destructor Name : Sign_Up::~Sign_Up
* Description     : Destructor for the Sign_Up class that finalizes the application.
* Parameters (in) : None
* Parameters (out): None
* Return value    : None
* Notes           : Finalizes the application and prints a thank you message to the console.
*****************************************************************************************/
Sign_Up::~Sign_Up()
{
     Console_Print.Set_Color(Console_Color::Green)<<"============== Thanks For Using My Application ==============\n";
     Console_Print.Set_Color(Console_Color::Yellow)<<"=============================================================\n";
}
/*****************************************************************************************
* Function Name   : operator>>
* Description     : Overloaded extraction operator to read a choice from the console.
* Parameters (in) : Console - The input stream from which to read the choice.
*                   Choice  - The reference to the Choice_Menu variable to store the choice.
* Parameters (out): None
* Return value    : A reference to the input stream.
* Notes           : Reads a choice from the console, subtracts '1' to convert it to 
*                   zero-based indexing, and stores it in the provided Choice_Menu variable.
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
* Function Name   : Sign_Up::Main_InterFace
* Description     : Main interface function to interact with the application.
* Parameters (in) : None
* Parameters (out): None
* Return value    : None
* Notes           : Displays a menu with options to add records, fetch records, print all
*                   records, or quit the application. Performs corresponding actions based
*                   on user input.
*****************************************************************************************/
void Sign_Up::Main_InterFace(void)
{
     Choice_Menu Choice{};
     bool Flag{true};
     Record User_Record{};
     while(Flag)
     {    
          Console_Print.Set_Color(Console_Color::Blue)<<"1) Add Record .\n2) Fetch Record .\n3) Print All Records .\n4) Quit .\n";
          Console_Print.Set_Color(Console_Color::Yellow)<<"- Please Select An Option : ";Console_Print>>Choice;
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
                    Flag=false;
               break;
               default:
               break;
          }
          Console_Print.Set_Color(Console_Color::Yellow)<<"=============================================================\n";
     }
}
}
/********************************************************************
 *  END OF FILE:  Signup.cpp
********************************************************************/
