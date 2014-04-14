// ////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// PROGRAM NAME:    Marina                                                                           //
// AUTHOR:          Alexander Pitkin                                                                 //
// DATE DUE:        March 27, 2014                                                                   //
// REMARKS:
//                                                                                                   //
// ////////////////////////////////////////////////////////////////////////////////////////////////////

// LIBRARY INCLUDES
#include <iostream>

// PRE-PROCESSOR
using namespace std;

// //////////////////////////////////////////////////
//                                                 //
// CLASS DEFINITIONS                               //
//                                                 //
// //////////////////////////////////////////////////

// PERSON ///////////////////////////////////////////
class Person
{
private:
    char name[40];                                              /// First Name
    int custID;                                                 /// Customer ID
    char phone[10];                                             /// Phone number
    char password[4];                                           /// Password to access marina
public:
    
    // CONSTRUCTOR
    Person (char n[40], int ID, char p[10], char b[40], char pass[4]);
    Person();
    
    // SETTERS
    void setName(char x[40])        {strcpy(name, x);}          /// Set name
    void setCustID(int x)           {custID = x;}               /// Set customer ID
    void setPhone(char x[10])       {strcpy(phone, x);}         /// Set phone number
    void setPassword(char x[4])     {strcpy(password, x);}      /// Set password
    
    // GETTERS
    string getName()                {return name;}              /// Get name
    int getCustID()                 {return custID;}            /// Set customer ID
    string getPhone()               {return phone;}             /// Set phone number
    string getPassword()            {return password;}          /// Set password
};

class Address
{
private:
         char street[40];                                       /// Street
         char city[40];                                         /// City
         char state[2];                                         /// State
         char zip[5];                                           /// Zip code
public:
    
    // CONSTRUCTOR
    Address (char s[40], char c[40], char st[2], char z[5]);
    Address();
    
    // SETTERS
    void setStreet(char x[40])      {strcpy(street, x);}        /// Set street
    void setCity(char x[40])        {strcpy(city, x);}          /// Set city
    void setState(char x[2])        {strcpy(state, x);}         /// Set state
    void setZip(char x[5])          {strcpy(zip, x);}           /// Set zip
        
};
// //////////////////////////////////////////////////
//                                                 //
// CONSTRUCTORS                                    //
//                                                 //
// //////////////////////////////////////////////////

// ROAD VEHICLE CONSTRUCTOR /////////////////////////


// //////////////////////////////////////////////////
//                                                 //
// MEMBER FUNCTIONS                                //
//                                                 //
// //////////////////////////////////////////////////

// Person :: inputPerson ////////////////////////////

// ////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// FUNCTION: main                                                                                    //
//                                                                                                   //
// ////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    // TEST FUNCTION
    
    // END PROGRAM
    return (0);
}











