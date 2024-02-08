/*******************************************************************
 *  FILE DESCRIPTION
-----------------------
 *  Author: Khaled El-Sayed @t0ti20
 *  File: ./Signup.hpp
 *  Date: January 30, 2023
 *  Description: This Is SignUp Headder File
 *  Namespace Name: Application
 *  Class Name: Sign_Up
 *  (C) 2023 "@t0ti20". All rights reserved.
*******************************************************************/
#ifndef _SIGNUP_HPP_
#define _SIGNUP_HPP_
/******************************************************************/
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
namespace Application
{
/*****************************************
------------- Choice Menu  ---------------
*****************************************/
enum class Choice_Menu : unsigned char
{
	Add_Record,Fetch_Record,Print_Records,Quit
};
/*****************************************
------------ Sign_Up Class  -------------
*****************************************/
class Sign_Up
{
private:
protected:
public:
/*****************************************************************************************
* Constructor Name: Sign_Up::Sign_Up
* Description     : Constructor for the Sign_Up class that initializes the application.
* Parameters (in) : None
* Parameters (out): None
* Return value    : None
* Notes           : Initializes the application and prints a welcome message to the console.
*****************************************************************************************/
Sign_Up();
/*****************************************************************************************
* Destructor Name : Sign_Up::~Sign_Up
* Description     : Destructor for the Sign_Up class that finalizes the application.
* Parameters (in) : None
* Parameters (out): None
* Return value    : None
* Notes           : Finalizes the application and prints a thank you message to the console.
*****************************************************************************************/
~Sign_Up();
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
void Main_InterFace(void);
};
}
/********************************************************************
 *  END OF FILE:  ./Signup.hpp
********************************************************************/
#endif
