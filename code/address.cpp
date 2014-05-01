// ////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// PROGRAM NAME:    Marina Address                                                                   //
// AUTHOR:          Alex and Mena                                                                    //
// DATE DUE:        March 27, 2014                                                                   //
// REMARKS:                                                                                          //
//                                                                                                   //
// ////////////////////////////////////////////////////////////////////////////////////////////////////
#include "Address.h"
// //////////////////////////////////////////////////
//                                                 //
// CONSTRUCTORS                                    //
//                                                 //
// //////////////////////////////////////////////////

// ADDRESS CONSTRUCTOR ///////////////////////////////
Address::Address (std::string s, std::string c, std::string st, std::string z)
{
    setStreet(s);                                               // Set Street
    setCity(c);                                                 // Set City
    setState(st);                                               // Set Street
    setZip(z);                                                  // Set ZIP
}
