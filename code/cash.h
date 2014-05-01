/*******************************************
*  Marina Payment Program
*  Authors: Nathan Vasquez 
*           Samarjeet Rai
*******************************************/
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
