/*******************************************
*  Marina Payment Program
*  Authors: Nathan Vasquez 
*           Samarjeet Rai
*******************************************/
//default constructer
Cash :: Cash()
{
     setAmtRec(0);
     setChaRem(0);
}
//calculate the change
double Cash :: calcChange(double aRec, double z)
{
     float changeTotal;
     changeTotal = aRec - z;
     return changeTotal;
}
//re  calculate the change
double Cash :: remChangeTotal()
{
       setChaRem(calcChange(getAmtRec() , getGrandTotal()));
}

//Cash display function
void Cash :: show()
{
     cout << "Amount recieved :"<<getAmtRec()<<"\n";
     cout << "change :         "<<getChaRem()<<"\n";
}
