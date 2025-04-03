//Programmer Vaughn Alston
// Weel 4 HW, PreferredCustomer
//Version 1.0
// // A retail store has a preferred customer plan where customers may earn discounts on
// all their purchases. The amount of a customer’s discount is determined by the amount
// of the customer’s cumulative purchases in the store.
// //The purchaseAmount variable holds the total of a customer’s purchases to date. The
// discountLevel variable should be set to the correct discount percentage, according to
// the store’s preferred customer plan. Write appropriate member functions for this class
// and demonstrate it in a simple program.

#include<iostream>
using namespace std;

class Customerdata // Main class
{
    protected:

            double total;

            public:
                    virtual void congratulations() = 0; // will update the user when they meet a %
                    virtual double totalamount() = 0;// this will be overriden with setpercent * total
            void setAmount(double amount) {total = amount;}

}; // End of first class

//5% Discount=

class PreferredCustomer1 : public Customerdata // PreferredCustomer inherits Custoemr data
{
    public:

        void congratulations() override {
            cout << "Congratulations! You've Unlocked a 5 discount on future purchases. \n";
        }
// apply the .5 discount

    double totalamount() 
    {
        return total * 0.95;
    }
};
//6% discount
class PreferredCustomer2 : public Customerdata 
{
    public:
        void congratulations() override {
            cout << "Congratulations! You've Unclocked a 6 discount on future purchases\n";
            
        }
//apply the .6 discount

        double totalamount()
        {
            return total * 0.94;
        }
}; // end f class for 6% discount

class PreferredCustomer3 : public Customerdata 
{
    public:
        void congratulations() override {
            cout << "Congratulations! You've Unclocked a 7 discount on future purchases\n";
            
        }
//apply the .7 discount

        double totalamount()
        {
            return total * 0.93;
        }
}; // end f class for 7% discount

//start of 10%
class PreferredCustomer4 : public Customerdata 
{
    public:
        void congratulations() override {
            cout << "Congratulations! You've Unclocked a 10 discount on future purchases\n";
            
        }
//apply the .10 discount

        double totalamount()
        {
            return total * 0.90;
        }
}; // end f class for 10% discount

