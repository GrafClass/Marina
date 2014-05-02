#ifndef PAYMENT_H
#define PAYMENT_H
/*******************************************
*  Marina Payment Program
*  Authors: Nathan Vasquez 
*           Samarjeet Rai
*******************************************/

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
#endif /* PAYMENT_H */
