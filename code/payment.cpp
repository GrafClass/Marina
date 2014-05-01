/*******************************************
*  Marina Payment Program
*  Authors: Nathan Vasquez 
*           Samarjeet Rai
*******************************************/

#include <cstdlib>
#include <iostream>

using namespace std;

//****************************Payment class
class Payment
{
      private:
              double subTotal;
              double grandTotal;
              double tax;
      public:
             //constructor
             Payment();
             
             //calculations
             double calcTax(double x);
             double calcGrand(double x, double y);
             
             //setters
             void setSubTotal(double x)       {subTotal = x;}
             void setTax(double y)            {tax = y;}
             void setGrandTotal(double z)     {grandTotal = z;}
             
             //getters
             double getSubTotal()        {return subTotal;}
             double getTax()             {return tax;}
             double getGrandTotal()      {return grandTotal;}
             //member functions
             double reCalcTotals();
             void displayPayment();
};
//default constructor
Payment :: Payment()
{
    setSubTotal(0);
    setTax(0);
    setGrandTotal(0);
}
//calculate tax
double Payment :: calcTax(double x)
{
    double taxTotal;
    taxTotal = x * .0925;
    return taxTotal;
}
//calculate grand total
double Payment :: calcGrand(double x, double y)
{
    double grand;
    grand = x + y;
    return grand;
}
//re-calculate totals
double Payment :: reCalcTotals()
{
     setTax(calcTax(getSubTotal()));
     setGrandTotal(calcGrand(getSubTotal(), getTax()));
}

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
//deafult constructer
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

//************************************************Cash Class
class Cash : public Payment
{
      private:
              double amtRec; //amount received
              double change; //the change
      public:
             //Constructor
             Cash();
             
             //setters
             void setAmtRec(double aRec)      {amtRec = aRec;}
             void setChaRem(double cRem)      {change = cRem;}
             
             //getters
             double getAmtRec()              {return amtRec;}
             double getChaRem()              {return change;}
             
             //member functions
             double calcChange(double aRec, double z);
             double remChangeTotal();
             void show();
      
};
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

// display
void Payment :: displayPayment()
{
     
     cout << "*****Payment Information*****\n";
     cout << "Cost:      "<< getSubTotal()<<"\n";
     cout << "Tax :      "<< getTax() <<"\n";
     cout << "Total :    "<< getGrandTotal() <<"\n";
}
//*********************************************//
//~~~~~~~~main function~~~~~~~~~~+++++ 8:::::::D
//********************************************//
int main()
{
    long num, aNum;
    int x, expdate, rNum, cNum;   
    double aRec;
    // payment class initalized
    cout << "The Cost of Marie   ";
    cin  >> x;
    
    char incode;
    cout << "Type of Payment ";
    cin  >> incode;
    
    switch(incode)
    {
                  case 'c':
                  case 'C':         cout << "card number  :     ";
                                    cin  >> num;
                                    cout << "Expiration date:   ";
                                    cin  >> expdate;
                                    break;
             
                  case 'h':
                  case 'H':         cout << "Acount number :    ";
                                    cin  >> aNum;
                                    cout << "Routing number :   ";
                                    cin  >> rNum;
                                    cout << "Check number :     ";
                                    cin  >> cNum;
                                    break;
                  
                  case 'a':             
                  case 'A':         cout << "Amount recieved :  ";
                                    cin  >> aRec;
                                    break;
    }
    
    // store the informarion from the classes
    switch(incode)
    {
                  case 'c':
                  case 'C':       Credit_Card p1;
                                   p1.setCardNum(num);
                                   p1.setExpireDate(expdate);
                                   p1.setSubTotal(x);
                                   p1.reCalcTotals();
                                   p1.displayPayment();
                                   p1.show();
                                   cout << "\n\n";
                                   break;
    }
    switch(incode)
    {
                  case 'h':
                  case 'H':       Check p2;
                                   p2.setAcctNum(aNum);
                                   p2.setRtNum(rNum);
                                   p2.setChNum(cNum);
                                   p2.setSubTotal(x);
                                   p2.reCalcTotals();
                                   p2.displayPayment();
                                   p2.show();
                                   cout << "\n\n";
                                   break;
    }
    switch(incode)
    {
                  case 'a':
                  case 'A':       Cash p3;
                                   p3.setAmtRec(aRec);
                                   p3.setSubTotal(x);
                                   p3.reCalcTotals();
                                   p3.remChangeTotal();
                                   p3.displayPayment();
                                   p3.show();
                                   cout << "\n\n";
                                   break;
    }
   
    
    
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
