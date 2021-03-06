#ifndef SLIP_H
#define SLIP_H
/**************************************************
*
*      program name:       Slip-Class
*      Author:             Grant & Cruze
*      date due:           Hopefully by the end of the semester...
*      remarks:            This class is only for calculating the price and type
*                          of a given length. (If the price is ridiculous, I apologize)
***************************************************/

/****************************************
*         Class definitions
****************************************/
class Slip
{
      private:
              int length;
              int price;
              int type;
              bool available;
              
      public:
             //Constructor
             Slip();             //Default Constructor that defaults size of boat to 0. Cruze made it.
             Slip(int length);

             //setters
             int setLength(int x)              {length = x;}
             int setPrice(int x)               {price = x;}
             int setType(int x)                {type = x;}
             void setAvailable(bool a)         {available = a;}
             

             //getters
             int getLength()                   {return length;}
             int getPrice()                    {return price;}
             int getType()                     {return type;}
             bool getAvailable()               {return available;}
             

             //Member function prototypes
             void display();             //Displays the slip length, type, and price 

};
#endif /* SLIP_H */
