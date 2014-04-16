/**************************************************
*
*      program name:       Slip-Class
*      Author:             Grant & Cruze
*      date due:           Hopefully by the end of the semester...
*      remarks:            Still needs a lot of work.
***************************************************/

/******************************************
*     library includes
******************************************/
#include <iostream>                //needed for I/O
#include <cstdlib>                 //Needed because Grant's IDE requires it...for whatever reason

/******************************************
*     pre-processor
******************************************/
#define PI 3.14159
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
             Slip();             //Constructor that assigns size of boat and ID no.
             Slip(int length);

             //Destructor
             ~Slip()
             {
                 cout << "slip destructor";
             }

             //setters
             int setLength(int x)              {length = x;}
             int setPrice(int x)               {price = x;}
             int setType(int x)                {type = x;}
             //int setSlip(int x)                {slip = x;}

             //getters
             int getLength()                   {return length;}
             int getPrice()                    {return price;}
             int getType()                     {return type;}
             //int getSlip()                     {return slip;}

             //Member function prototypes
             bool vacancy(int id);       //Identifies the vacancy of a slip by passing its id no. in the parameters.
             void display();             //Displays the slip ID number, length, type and its vacancy.

};
/****************************************
*       enum
****************************************/
enum type {small, medium, large, unknown};

/****************************************
*         member functions
****************************************/
///Constructors:
///This constructor creates an array to assign each slip an ID no.(1-100)
Slip :: Slip()
{
    length = 0;
    price = 0;
    int x = 1; //counter for future use
    int slipMap[1][100]; //initializes 1 by 100 array for slips

    ///Gives the ID no. to slip array (no. 1-100)
    for (x=1; x<101; x++)
        {
              slipMap[0][x] = x;
              //cout << slipMap[0][x] << " ";   //Uncomment this line to have the array printed out
        }




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

///This function will return the vacancy of a slip
///'0' = empty;     '1' = occupied;
bool Slip :: vacancy(int id)
{
}

void Slip :: display()
{
    cout << "length:            "     << getLength() << "\n";
    cout << "price:             "     << getPrice() << "\n";
    cout << "slip number:      \n"; //Haven't completed the function yet.
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
    cout << "vacancy:          \n";
/*    switch(getUse())
    {
        case 0: cout << "Open\n";
            break;
        case 1: cout << "Occupied\n";
            break;
        case 2: cout << "unknown\n";
    }*/
}

/****************************************
*          function prototypes
****************************************/

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *     local variables
    ******************************/
    Slip test(10);          //tests constructo
    test.display();         //tests display function
    cout << "\n\n";

	return 0;
}  // end main













