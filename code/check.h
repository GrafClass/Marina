/*******************************************
*  Marina Payment Program
*  Authors: Nathan Vasquez 
*           Samarjeet Rai
*******************************************/
#include "Payment.h"
//**********************************************Check Class
class Check : public Payment
{
      private:
              long acctNum;
              int  rtNum;
              int  chNum;
      public:
             //Constructor
             Check();
             
             //setters
             void setAcctNum(long aNum)          {acctNum = aNum;}
             void setRtNum(int rNum)             {rtNum = rNum;}
             void setChNum( int cNum)            {chNum = cNum;}
             
             //getters
             long getAcctNum()                   {return acctNum;}
             int  getRtNum()                     {return rtNum;}
             int  getChNum()                     {return chNum;}
             
             //member functions
             void show();

};
