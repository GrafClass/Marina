/*******************************************
*  Marina Payment Program
*  Authors: Nathan Vasquez 
*           Samarjeet Rai
*******************************************/
//default constructor
Credit_Card :: Credit_Card()
{
    setCardNum(0);
    setExpireDate(0);
}

void Credit_Card :: show()
{
       cout << "card number    :  " << getCardNum() <<"\n";
       cout << "Expiration date:  " << getExpireDate() <<"\n";
}
