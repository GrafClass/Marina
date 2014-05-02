#ifndef PERSON_H
#define PERSON_H
// ////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// PROGRAM NAME:    Marina Person                                                                    //
// AUTHOR:          Alex and Mena                                                                    //
// DATE DUE:        March 27, 2014                                                                   //
// REMARKS:                                                                                          //
//                                                                                                   //
// ////////////////////////////////////////////////////////////////////////////////////////////////////

#include <string>
// //////////////////////////////////////////////////
//                                                 //
// CLASS DEFINITIONS                               //
//                                                 //
// //////////////////////////////////////////////////

// PERSON ///////////////////////////////////////////
class Person
{
private:
    std::string name;                                                // First Name
    int custID;                                                 // Customer ID
    std::string phone;                                               // Phone number
    std::string password;                                            // Password to access marina
public:
    
    // CONSTRUCTORS
    Person (std::string na, int i, std::string p, std::string pa);
    Person();
    
    // SETTERS
    void setName(std::string x)          {name = x;}                 // Set name
    void setCustID(int x)           {custID = x;}               // Set customer ID
    void setPhone(std::string x)         {phone = x;}                // Set phone number
    void setPassword(std::string x)      {password = x;}             // Set password
    
    // GETTERS
    std::string getName()                {return name;}              // Get name
    int getCustID()                 {return custID;}            // Set customer ID
    std::string getPhone()               {return phone;}             // Set phone number
    std::string getPassword()            {return password;}          // Set password
};
#endif /* PERSON_H */
