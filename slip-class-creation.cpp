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
             Slip()             //Constructor that assigns size of boat
             {
                 cout << "slip constructor";
                 length = 0;
                 price = 0;
             }

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
             Slip(int length);
             int boatYard();               //creates 10x10 array and names each slip with a number 1-100
             bool vacancy();             //Identifies the vacancy of a slip
             void display();             //Displays the arrays ID no. and its vacancy

};
/****************************************
*       enum
****************************************/
enum type {small, medium, large, unknown};

/****************************************
*         member functions
****************************************/
Slip :: Slip(int length)
{

     setLength(length);

     if (getLength() <= 25 && getLength() > 0)
        {
            setType(1);    //'s' is returned for Small boats
        }

     else if (getLength() < 50 && getLength() > 25)
        {
            setType(2);   //'m' is returned for Medium sized boats
        }

     else if (getLength() > 50 && getLength() < 200)
        {
           setType(3);    //'l' is returned for Large boats
        }

     else
        {
           setType(4);   //'x' is returned if boat length is < 0 or > 200
        }
}

//TODO: This member function will create an array for the boat yard
//      to return the id. Should perhaps be made into a constructor that returns the
//      Vacancy of a specific slip. I don't know.
int Slip :: boatYard()
{
    int x = 1; //counter for future use
    int slipMap[1][100]; //initializes 1 by 100 array for slips

    ///Gives the ID no. to slip array (no. 1-100)
    for (x=1; x<101; x++)
        {
              slipMap[0][x] = x;
              //cout << slipMap[0][x] << " ";   //Uncomment this line to have the array printed
        }

}

/*int Slip :: slipPrice()
{
    if (getLength == 's')
       {
           return
}*/

///No idea what this is supposed to be, but Cruze created it
///So I won't delete it.    --Grant
bool Slip :: vacancy()
{
}

void Slip :: display()
{
    cout << "length:            "     << getLength() << "\n";
    cout << "price:             "     << getPrice() << "\n";
    cout << "slip number        "; //Haven't completed the function yet.
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
    Slip test(10);
    test.display();        //should return 's'
    cout << "\n\n\n";

    test.boatYard();
	return 0;
}  // end main













