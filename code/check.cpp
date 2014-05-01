/*******************************************
*  Marina Payment Program
*  Authors: Nathan Vasquez 
*           Samarjeet Rai
*******************************************/
#include "Check.h"
//default constructer
Check :: Check()
{
      setAcctNum(0);
      setRtNum(0);
      setChNum(0);
}
//Check display function
void Check :: show()
{
        //TODO pass this up to the interface class as a string
        
               //cout << "Acount number :  "<<getAcctNum()<<"\n";
               //cout << "Routing number : "<<getRtNum()<<"\n";
               //cout << "Check number :   "<<getChNum()<<"\n";
}
