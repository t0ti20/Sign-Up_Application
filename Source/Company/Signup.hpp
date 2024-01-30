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
* Function Name   : Record::Record(const std::string& Record_Name, uint32_t Record_Age)
* Description     : Default Instrctor For Record Class Creating New Record
* Parameters (in) : New Record Name - New Record_Age.
* Parameters (out): None
* Return value    : None
* Notes           : -This Is Default Instructor
*****************************************************************************************/
Sign_Up();
/*****************************************************************************************
* Function Name   : Record::Record(const std::string& Record_Name, uint32_t Record_Age)
* Description     : Default Instrctor For Record Class Creating New Record
* Parameters (in) : New Record Name - New Record_Age.
* Parameters (out): None
* Return value    : None
* Notes           : -This Is Default Instructor
*****************************************************************************************/
~Sign_Up();
/*****************************************************************************************
* Function Name   : Record::Record(const std::string& Record_Name, uint32_t Record_Age)
* Description     : Default Instrctor For Record Class Creating New Record
* Parameters (in) : New Record Name - New Record_Age.
* Parameters (out): None
* Return value    : None
* Notes           : -This Is Default Instructor
*****************************************************************************************/
void Main_InterFace(void);
};
}
/********************************************************************
 *  END OF FILE:  ./Signup.hpp
********************************************************************/
#endif
