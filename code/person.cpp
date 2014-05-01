// ////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// PROGRAM NAME:    Marina Person                                                                    //
// AUTHOR:          Alex and Mena                                                                    //
// DATE DUE:        March 27, 2014                                                                   //
// REMARKS:                                                                                          //
//                                                                                                   //
// ////////////////////////////////////////////////////////////////////////////////////////////////////
#include "person.h"

// //////////////////////////////////////////////////
//                                                 //
// CONSTRUCTORS                                    //
//                                                 //
// //////////////////////////////////////////////////

// PERSON CONSTRUCTOR ///////////////////////////////
Person::Person (string na, int i, string p, string pa)
{
    setName(na);                                                // Set Name
    setCustID(i);                                               // Set ID
    setPhone(p);                                                // Set Phone
    setPassword(pa);                                            // Set Password
}
