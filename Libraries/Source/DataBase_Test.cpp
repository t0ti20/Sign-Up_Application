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
    void SetUp()override
    {
        cout<<"Starting Test\n";
    }
    void TearDown()override
    {
        cout<<"Ending Test\n";
    }
};
TEST_F(Database_Test,Adding_Records_More_Maximum)    
{
    Error_Type Result{Error_Type::No_Errors};
    User_Record.Age=2;
    User_Record.ID=1;
    User_Record.Name="Ahmed";
    for(uint32_t Counter{};Counter<4;Counter++)
    {
        User_Record.ID=Counter;
        Result=DataBase.Add_Record(User_Record);
        EXPECT_EQ(Result,Error_Type::No_Errors);
    }
    User_Record.ID=100;
    Result=DataBase.Add_Record(User_Record);
    EXPECT_EQ(Result,Error_Type::Maximum_Records);
}
TEST_F(Database_Test,Printing_Invalid_Record)    
{
    Error_Type Result{Error_Type::No_Errors};
    User_Record.Age=2;
    User_Record.ID=1;
    User_Record.Name="Ahmed";
    DataBase.Add_Record(User_Record);
    Record &Test_1=DataBase.Fetch_Record(1);
    Result=DataBase.Print_Record(Test_1);
    EXPECT_EQ(Result,Error_Type::No_Errors);
    Record &Test_2=DataBase.Fetch_Record(99);
    Result=DataBase.Print_Record(Test_2);
    EXPECT_EQ(Result,Error_Type::Invalid_Record);
}
/********************************************************************
 *  END OF FILE:  DataBase_Test.cpp
********************************************************************/
