/**************************************************
*
*      program name:       yard-class
*      Author:             Grant
*      date due:           Hopefully by the end of the semester...
*      remarks:            This class is intended to make only 1 object.
*                          Member functions should be able to do everything.
***************************************************/

/******************************************
*     library includes
******************************************/
#include <iostream>                // needed for I/O
#include <cstdlib>                 // Needed because Grant's IDE requires it...for whatever reason

/******************************************
*     pre-processor
******************************************/
using namespace std;

/****************************************
*         Class definitions
****************************************/
class Yard 
{
      private:
            bool map[1][100];   // Vacancy map: 1 = occupied, 0 = vacant
            int idMap[1][100];  // ID numbers

      public:
            //Constructors:
            Yard();

            //setters
            void setID(int x)                     {idMap[0][x] = x;}    // Sets the ID number
            void setVacancy(bool x, int y)        {map[0][y] = x;}      // Bool arg: 1 = occupied, 0 = vacant; int = id

            //getters
            int getID(int x)                        {return idMap[0][x];}   // returns the ID number
            bool getVacancy(int x)                  {return map[0][x];}     // returns the vacancy of a slip

            //Member function prototypes
            void check(int);        // Checks the vacancy of the slip number passed in the parameters.
            void first();           // Iterates through the slip to find first open Slip.
            void open();            // Displays the slip ID's that are currently vacant.
            void display();         // Displays the slip ID's that are currently being rented.


};

/****************************************
*         member functions
****************************************/
/// Constructor: Initializes the ID numbers(1-100)
/// Also sets each boolean element of the map array to 0 or false
Yard :: Yard()
{
    for (int h=1; h<101; h++)
    {
        setID(h);
        setVacancy(0, h);
    }
}
        
/// Checks the vacancy of a slip and displays a request to rent said slip
void Yard :: check(int z)
{
    char ans;

    if (getVacancy(z) == 0)
    {
        cout << "Slip no. " << z << " is currently vacant.\n";
        cout << "Would you like to rent slip no. " << z << "?(y or n)\n";
        cin >> ans;
    }

    else if (getVacancy(z) == 1)
    {
        cout << "Sorry, slip no. " << z << " is currently occupied.\n";
    }

    else 
    {
        cout << "Ya goofed";
    }


    if (ans == 'y')
    {
        setVacancy(1, z);
    }
}

/// Looks for the first open slip and displays a request to rent said slip
void Yard :: first()
{
    char ans;

    for (int y=1; y<101; y++)
    {
        if (getVacancy(y) == 0)
        {
            cout << "Slip no. " << getID(y) << " is vacant.\n";
            cout << "Would you like to rent slip no. " << getID(y) << "?(y or n)\n";
            cin >> ans;
            if (ans == 'y')
            {
                setVacancy(1, y);
                y =+100;
            }
        }
    }
}


/// Displays the Slips that are still vacant
void Yard :: open()
{ 
    cout << "Available slips(by ID number):\n";
    for (int y=1; y<101; y++)
    {
        if (getVacancy(y) == 0)
        {
            cout << getID(y) << ", ";
        }
    }
}

/// Displays the slips that are already occupied
void Yard :: display()
{
    cout << "Occupied slips(by ID number):\n";
    for (int y=1; y<101; y++)
    {
        if (getVacancy(y) == 1)
        {
            cout << getID(y) << ", ";
        }
    }

}

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    Yard test;          // Tests for member functions
    test.open();
    cout << "\n";
    test.display();
    cout << "\n";
    test.first();
    cout << "\n";
    test.first();
    cout << "\n";
    test.check(33);
    cout << "\n";
    test.display();
    cout << "\n";

	return 0;
}  // end main













