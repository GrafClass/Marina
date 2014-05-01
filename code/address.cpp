// ////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// PROGRAM NAME:    Marina Address                                                                   //
// AUTHOR:          Alex and Mena                                                                    //
// DATE DUE:        March 27, 2014                                                                   //
// REMARKS:                                                                                          //
//                                                                                                   //
// ////////////////////////////////////////////////////////////////////////////////////////////////////

// //////////////////////////////////////////////////
//                                                 //
// CONSTRUCTORS                                    //
//                                                 //
// //////////////////////////////////////////////////

// ADDRESS CONSTRUCTOR ///////////////////////////////
Address :: Address (string s, string c, string st, string z)
{
    setStreet(s);                                               // Set Street
    setCity(c);                                                 // Set City
    setState(st);                                               // Set Street
    setZip(z);                                                  // Set ZIP
}
