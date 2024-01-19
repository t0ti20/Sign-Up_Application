/*******************************************************************
 *  FILE DESCRIPTION
-----------------------
 *  Author: Khaled El-Sayed @t0ti20
 *  File: ./Company.cpp
 *  Date: November 30, 2023
 *  Description: This Is Default Test File For CPP Generator
 *  Class Name: Employee
 *  (C) 2023 "@t0ti20". All rights reserved.
*******************************************************************/
/*****************************************
-----------     INCLUDES     -------------
*****************************************/
#include "Signup.hpp"
#include "DataBase.hpp"
#include <iostream>
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
namespace Application
{
using namespace Records_Handler;
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
void Sign_Up::Main_InterFace(void)
{
     char a{};
     while(true)
     {
          Console_Print<<"- Please Select An Option : \n";
          std::cin>>a;
          Console_Print<<a;
          std::cout<<'\n';
     }
}
}
/********************************************************************
 *  END OF FILE:  Company.cpp
********************************************************************/
