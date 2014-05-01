/*******************************************
*  Marina Payment Program
*  Authors: Nathan Vasquez 
*           Samarjeet Rai
*******************************************/
#include "Creditcard.h"
//default constructor
Credit_Card :: Credit_Card()
{
    setCardNum(0);
    setExpireDate(0);
}

void Credit_Card :: show()
{
    //TODO pass up to interface class as a string
       //cout << "card number    :  " << getCardNum() <<"\n";
       //cout << "Expiration date:  " << getExpireDate() <<"\n";
}
