/*******************************************
*  Marina Payment Program
*  Authors: Nathan Vasquez 
*           Samarjeet Rai
*******************************************/
//defualt constructer
Check :: Check()
{
      setAcctNum(0);
      setRtNum(0);
      setChNum(0);
}
//Check display function
void Check :: show()
{
               cout << "Acount number :  "<<getAcctNum()<<"\n";
               cout << "Routing number : "<<getRtNum()<<"\n";
               cout << "Check number :   "<<getChNum()<<"\n";
}
