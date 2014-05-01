/*******************************************
*  Marina Payment Program
*  Authors: Nathan Vasquez 
*           Samarjeet Rai
*******************************************/
//default constructor
Payment::Payment()
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
// display
void Payment :: displayPayment()
{
     
     cout << "*****Payment Information*****\n";
     cout << "Cost:      "<< getSubTotal()<<"\n";
     cout << "Tax :      "<< getTax() <<"\n";
     cout << "Total :    "<< getGrandTotal() <<"\n";
}
