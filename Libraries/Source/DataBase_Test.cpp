/*******************************************************************
 *  FILE DESCRIPTION
-----------------------
 *  Author: Khaled El-Sayed @t0ti20
 *  File: ./DataBase_Test.cpp
 *  Date: January 30, 2024
 *  Description: This Is Test File For SignUp Application DataBase Lib
 *  Namespace Name: Records_Handler
 *  Class Name: Common,Record,Record_Manager
 *  (C) 2024 "@t0ti20". All rights reserved.
*******************************************************************/
/*****************************************
-----------     INCLUDES     -------------
*****************************************/
#include <gtest/gtest.h>
#include "DataBase.hpp"
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
using namespace Records_Handler;
using namespace testing;
using namespace std;
class Database_Test : public testing::Test
{
public:
    Record_Manager DataBase{};
    Record User_Record{};
    std::stringstream captured_stdout;
    void SetUp()override
    {
        cout<<"Starting Test\n";
        internal::CaptureStdout();
    }
};
TEST_F(Database_Test,Adding_Records)    
{
    User_Record.Age=2;
    User_Record.ID=1;
    User_Record.Name="Ahmed";
    /* Adding First Record */
    DataBase.Add_Record(User_Record);
    EXPECT_EQ(internal::GetCapturedStdout(),"\x1B[1;32mRecord Added Successfully.\n\x1B[0m");
    /* Adding Records */
    User_Record.ID=2;
    DataBase.Add_Record(User_Record);
    EXPECT_EQ(internal::GetCapturedStdout(),"\x1B[1;32mRecord Added Successfully.\n\x1B[0m");
    // User_Record.ID=3;
    // DataBase.Add_Record(User_Record);
    // EXPECT_EQ(internal::GetCapturedStdout(),"\x1B[1;32mRecord Added Successfully.\n\x1B[0m");
    // User_Record.ID=4;
    // DataBase.Add_Record(User_Record);
    // EXPECT_EQ(internal::GetCapturedStdout(),"\x1B[1;32mRecord Added Successfully.\n\x1B[0m");
}
/********************************************************************
 *  END OF FILE:  DataBase_Test.cpp
********************************************************************/
