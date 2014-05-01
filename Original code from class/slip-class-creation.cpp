/**************************************************
*
*      program name:       Slip-Class
*      Author:             Grant & Cruze
*      date due:           Hopefully by the end of the semester...
*      remarks:            This class is only for calculating the price and type
*                          of a given length. (If the price is ridiculous, I apologize)
***************************************************/

/******************************************
*     library includes
******************************************/
#include <iostream>                //needed for I/O
#include <cstdlib>                 //Needed because Grant's IDE requires it...for whatever reason

/******************************************
*     pre-processor
******************************************/
using namespace std;

/****************************************
*         Class definitions
****************************************/
class Slip
{
      private:
              int length;
              int price;
              int type;
      public:
             //Constructor
             Slip();             //Default Constructor that defaults size of boat to 0. Cruze made it.
             Slip(int length);

             //setters
             int setLength(int x)              {length = x;}
             int setPrice(int x)               {price = x;}
             int setType(int x)                {type = x;}

             //getters
             int getLength()                   {return length;}
             int getPrice()                    {return price;}
             int getType()                     {return type;}

             //Member function prototypes
             void display();             //Displays the slip length, type, and price 

};
/****************************************
*         enum
****************************************/
enum type {small, medium, large, unknown};

/****************************************
*         member functions
****************************************/
///Constructor:
Slip :: Slip()
{
    length = 0;
    price = 0;
}

///This constructor sets the type and price of boat slip based on the length defined in the parameters
Slip :: Slip(int length)
{

     setLength(length);

     if (getLength() <= 25 && getLength() > 0)
        {
            setType(1);    //'small' is returned for Small boats
            setPrice(100);
        }

     else if (getLength() < 50 && getLength() > 25)
        {
            setType(2);   //'medium' is returned for Medium sized boats
            setPrice(200);
        }

     else if (getLength() > 50 && getLength() < 200)
        {
           setType(3);    //'large' is returned for Large boats
           setPrice(400);
        }

     else
        {
           setType(4);   //'unknown' is returned if boat length is < 0 or > 200
           setPrice(0);
        }
}

/// Displays the length, type and price
void Slip :: display()
{
    cout << "length:            "     << getLength() << " feet\n";
    cout << "type:              ";
    switch(getType())
    {
        case 1: cout << "small\n";
            break;
        case 2: cout << "medium\n";
            break;
        case 3: cout << "large\n";
            break;
        case 4: cout << "unknown\n";
    }
    cout << "price:             " << getPrice() << "$/month\n";
}


/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    Slip test(10);          //Member function tests
    test.display();        
    cout << "\n";
    Slip test2(75);
    test2.display();
    cout << "\n";

	return 0;
}  // end main













