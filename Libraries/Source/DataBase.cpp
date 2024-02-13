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
/*****************************************
----------    GLOBAL DATA     ------------
*****************************************/
namespace Records_Handler
{
namespace logging = boost::log;
namespace expr = boost::log::expressions;
namespace keywords = boost::log::keywords;
using namespace logging::trivial;
using namespace std;
Common Console_Print;
Logging Logging_Handler;
/*****************************************
---------    Logging Class     -----------
*****************************************/
/*****************************************************************************************
* Constructor Name: Logging::Logging
* Description     : Constructor for the Logging class that initializes logging.
* Parameters (in) : None
* Parameters (out): None
* Return value    : None
* Notes           : Initializes file logging with a specific format and adds common 
*                   attributes such as timestamp. Also, writes a message indicating the
*                   start of the application to the logging handler.
*****************************************************************************************/
Logging::Logging()
{
    /* Set up file logging with a specific format */
    logging::add_file_log
    (
        /* Log file name */
        keywords::file_name = "Application.log",
        keywords::format =
        (
            expr::stream
                /* Log timestamp */
                << expr::format_date_time< boost::posix_time::ptime >("TimeStamp", "%Y-%m-%d %H:%M:%S") 
                /* Log severity level */
                << ": <" << logging::trivial::severity 
                /* Log the actual message */
                << "> " << expr::smessage
        )
    );
    /* Add common attributes, such as timestamp */
    logging::add_common_attributes();
    Logging_Handler<<"Application Is Starting.";
}
/*****************************************************************************************
* Destructor Name : Logging::~Logging
* Description     : Destructor for the Logging class that finalizes logging.
* Parameters (in) : None
* Parameters (out): None
* Return value    : None
* Notes           : Finalizes logging by writing a message indicating the end of the 
*                   application to the logging handler.
*****************************************************************************************/
Logging::~Logging()
{
     Logging_Handler<<"Application Has Ended.";
}
/*****************************************************************************************
* Method Name     : Logging& Logging::Logging_Set_Level
* Description     : Sets the logging level for the Logging class.
* Parameters (in) : Logging_Level - The severity level to be set for logging.
* Parameters (out): None
* Return value    : A reference to the Logging object.
* Notes           : The specified severity level is used to filter log messages. Only
*                   log messages with a severity level greater than or equal to the
*                   specified level will be logged.
*****************************************************************************************/
Logging& Logging::Logging_Set_Level(severity_level Logging_Level)
{
     Level=Logging_Level;
     return *this;
}
/*****************************************************************************************
* Method Name     : Logging::Logging_Message
* Description     : Logs a message with the specified severity level.
* Parameters (in) : Message - The message to be logged.
* Parameters (out): None
* Return value    : None
* Notes           : The message is logged with the severity level previously set using
*                   Logging_Set_Level method. After logging the message, the severity
*                   level is reset to 'trace'.
*****************************************************************************************/
void Logging::Logging_Message(const char* Message)
{
     BOOST_LOG_SEV(Log,Level)<<Message;
     Level=trace;
}
/*****************************************************************************************
* Operator Name   : Logging::operator<<
* Description     : Overloaded insertion operator to log a message.
* Parameters (in) : Message - The message to be logged.
* Parameters (out): None
* Return value    : None
* Notes           : This operator is used to log a message with the severity level 
*                   previously set using the Logging_Set_Level method. After logging the 
*                   message, the severity level is reset to 'trace'.
*****************************************************************************************/
void Logging::operator<<(const char* Message)
{
     Logging_Message(Message);
}
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
Common& Common::Set_Color(Console_Color Color)
{
     Current_Color=Color;
     return *this;
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
}
/*****************************************************************************************
* Function Name   : Record::Print_Record
* Description     : Prints details of a user record.
* Parameters (in) : User_Record - The record to be printed.
* Parameters (out): None
* Return value    : None
* Notes           : If the user record has the default ID, an error message is printed.
*****************************************************************************************/
Error_Type Record::Print_Record(Record& User_Record) 
{
     Error_Type Return{Error_Type::No_Errors};
     if (User_Record.ID==DEFAULT_ID) 
     {
          Return=Error_Type::Invalid_Record;
          Logging_Handler<<"Printing Invalid Record";
          Console_Print.Set_Color(Console_Color::Red)<< "Invalid user ID. No record found.\n"; 
     } 
     else
     {
          Logging_Handler<<"Printing Valid Record";
          Console_Print<<"------------------------------------\n";
          Console_Print.Set_Color(Console_Color::Yellow)<<"Record ID : "<<User_Record.ID;
          Console_Print.Set_Color(Console_Color::Yellow)<<"\nRecord Name : "<<User_Record.Name;
          Console_Print.Set_Color(Console_Color::Yellow)<<"\nRecord Age : "<<User_Record.Age<<"\n";
     }
     return Return;
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
Error_Type Record_Manager::Add_Record(Record& User_Record) 
{
     Error_Type Return{Error_Type::No_Errors};
     if (All_Records.size()<TOTAL_RECORDS) 
     {
          All_Records.push_back(User_Record);
          Console_Print.Set_Color(Console_Color::Green)<<"Record Added Successfully.\n";
          Logging_Handler<<"Added Record To DataBase Successfully.";
     } 
     else
     {
          Return=Error_Type::Maximum_Records;
          Console_Print.Set_Color(Console_Color::Red)<<"Cannot add more records. Maximum limit reached.\n";
          Logging_Handler.Logging_Set_Level(severity_level::error)<<"Record Adding Error,Maximum Limit Reached.";
     }
     return Return;
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
Record& Record_Manager::Fetch_Record(uint32_t User_ID)
{
     vector<Record>::iterator Counter;
     static Record Nedded_Record{};
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
          Logging_Handler<<"Susessfull Searching For Record.";
          Nedded_Record=*Counter;
     }
     else 
     {
          Logging_Handler.Logging_Set_Level(severity_level::error)<<"Cant Find Needded Record.";
          Nedded_Record.ID=DEFAULT_ID;
     }
     return Nedded_Record;
}
/*****************************************************************************************
* Function Name   : Record_Manager::Print_All_Records
* Description     : Prints details of all records in the Record Manager.
* Parameters (in) : None
* Parameters (out): None
* Return value    : None
* Notes           : Iterates through all records and prints each record using Print_Record.
*****************************************************************************************/
Error_Type Record_Manager::Print_All_Records(void)
{
     Error_Type Return{Error_Type::No_Errors};
     for(size_t Counter{};Counter<All_Records.size();++Counter)
     {
          Print_Record(All_Records[Counter]);
     }
     Logging_Handler<<"Printing All Records.";
     return Return;
}
}
/********************************************************************
 *  END OF FILE:  ./DataBase.cpp
********************************************************************/
