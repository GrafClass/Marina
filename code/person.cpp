// ////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// PROGRAM NAME:    Marina Person                                                                    //
// AUTHOR:          Alex and Mena                                                                    //
// DATE DUE:        March 27, 2014                                                                   //
// REMARKS:                                                                                          //
//                                                                                                   //
// ////////////////////////////////////////////////////////////////////////////////////////////////////
#include "Person.h"

// //////////////////////////////////////////////////
//                                                 //
// CONSTRUCTORS                                    //
//                                                 //
// //////////////////////////////////////////////////

// PERSON CONSTRUCTOR ///////////////////////////////
Person::Person()
{
    setName("");
    setCustID(0);
    setPhone("");
    setPassword("");
}
Person::Person(std::string na, int i, std::string p, std::string pa)
{
    setName(na);                                                // Set Name
    setCustID(i);                                               // Set ID
    setPhone(p);                                                // Set Phone
    setPassword(pa);                                            // Set Password
}
