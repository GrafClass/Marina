#ifndef ADDRESS_H
#define ADDRESS_H
// ////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// PROGRAM NAME:    Marina Person and Address                                                        //
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

class Address
{
private:
         std::string street;                                         // Street
         std::string city;                                           // City
         std::string state;                                          // State
         std::string zip;                                            // Zip code
public:
    
    // CONSTRUCTORS
    Address (std::string s, std::string c, std::string st, std::string z);
    Address();
    
    // SETTERS
    void setStreet(std::string x)        {street = x;}               // Set street
    void setCity(std::string x)          {city = x;}                 // Set city
    void setState(std::string x)         {state = x;}                // Set state
    void setZip(std::string x)           {zip = x;}                  // Set zip
    
    // GETTERS
    std::string getStreet()              {return street;}
    std::string getCity()                {return city;}
    std::string getState()               {return state;}
    std::string getZip()                 {return zip;}
};
#endif /* ADDRESS_H */
