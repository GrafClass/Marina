#ifndef CREDITCARD_H
#define CREDITCARD_H
/*******************************************
*  Marina Payment Program
*  Authors: Nathan Vasquez 
*           Samarjeet Rai
*******************************************/
#include "Payment.h"
//**************************************Credit Card Class
class Credit_Card : public Payment
{
      private:
              long cardNum;
              int expireDate;
      public:
             //constructors
             Credit_Card();
             
             //setters
             void setCardNum(long num)                   {cardNum = num;}
             void setExpireDate(int expdate)             {expireDate = expdate;}
             
             //getters
             long getCardNum()         {return cardNum;}
             int getExpireDate()       {return expireDate;}

             //member functions
             void show();
};
#endif /* CREDITCARD_H */
