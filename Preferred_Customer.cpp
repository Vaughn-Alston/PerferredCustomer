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
                    virtual void totalamount() = 0;// this will be overriden with setpercent * total
            void setAmount(double amount) {total = amount;}

}; // End of first class