// ////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// PROGRAM NAME:    Marina Person and Address                                                        //
// AUTHOR:          Alex and Mena                                                                    //
// DATE DUE:        March 27, 2014                                                                   //
// REMARKS:
//                                                                                                   //
// ////////////////////////////////////////////////////////////////////////////////////////////////////

// LIBRARY INCLUDES
#include <iostream>
#include <string>

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
    string name;                                                // First Name
    int custID;                                                 // Customer ID
    string phone;                                               // Phone number
    string password;                                            // Password to access marina
public:
    
    // CONSTRUCTORS
    Person (string na, int i, string p, string pa);
    Person();
    
    // SETTERS
    void setName(string x)          {name = x;}                 // Set name
    void setCustID(int x)           {custID = x;}               // Set customer ID
    void setPhone(string x)         {phone = x;}                // Set phone number
    void setPassword(string x)      {password = x;}             // Set password
    
    // GETTERS
    string getName()                {return name;}              // Get name
    int getCustID()                 {return custID;}            // Set customer ID
    string getPhone()               {return phone;}             // Set phone number
    string getPassword()            {return password;}          // Set password
};

class Address
{
private:
         string street;                                         // Street
         string city;                                           // City
         string state;                                          // State
         string zip;                                            // Zip code
public:
    
    // CONSTRUCTORS
    Address (string s, string c, string st, string z);
    Address();
    
    // SETTERS
    void setStreet(string x)        {street = x;}               // Set street
    void setCity(string x)          {city = x;}                 // Set city
    void setState(string x)         {state = x;}                // Set state
    void setZip(string x)           {zip = x;}                  // Set zip
    
    // GETTERS
    string getStreet()              {return street;}
    string getCity()                {return city;}
    string getState()               {return state;}
    string getZip()                 {return zip;}
};

// //////////////////////////////////////////////////
//                                                 //
// CONSTRUCTORS                                    //
//                                                 //
// //////////////////////////////////////////////////

// PERSON CONSTRUCTOR ///////////////////////////////
Person :: Person (string na, int i, string p, string pa)
{
    setName(na);                                                // Set Name
    setCustID(i);                                               // Set ID
    setPhone(p);                                                // Set Phone
    setPassword(pa);                                            // Set Password
}

// PERSON CONSTRUCTOR ///////////////////////////////
Address :: Address (string s, string c, string st, string z)
{
    setStreet(s);                                               // Set Street
    setCity(c);                                                 // Set City
    setState(st);                                               // Set Street
    setZip(z);                                                  // Set ZIP
}

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











