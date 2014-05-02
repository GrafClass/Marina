#ifndef YARD_H
#define YARD_H
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
#endif /* YARD_H */
