// ////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// PROGRAM NAME:    Marina Person and Address                                                        //
// AUTHOR:          Alex and Mena                                                                    //
// DATE DUE:        March 27, 2014                                                                   //
// REMARKS:                                                                                          //   
//                                                                                                   //
// ////////////////////////////////////////////////////////////////////////////////////////////////////

// //////////////////////////////////////////////////
//                                                 //
// CLASS DEFINITIONS                               //
//                                                 //
// //////////////////////////////////////////////////

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
