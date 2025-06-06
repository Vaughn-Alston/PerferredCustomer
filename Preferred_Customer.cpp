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

int main()
{
    double amount = 0.0;
    int choice; 
    Customerdata* choiceptr = nullptr; // null pointer prevent

    while(true) // this will loop the user in the code untill break
    {
    cout << "----Shirt Catalog---- \n" <<
    "1.Nike Shirt ---- 50.25 \n" <<
    "2.Supreme Shirt --- 100.69\n" <<
    "3.Bape Shirt ---- 200.82\n" <<
    "4.Vans Lited Edition --- 400.20\n"
    "0..... Close Program\n\n";
    cout << "Select Choice to purchase: ";
    cin >> choice;

    // Updating amount catalog user interactive catalog
     if (choice ==0)
     {
        cout << "\nThank You. Ending Program.\n " << endl;
        break;
     }
     else if(choice == 1)
     {
        amount += 50.25;
     }
     else if(choice == 2)
     {
        amount += 100.69;
     }
     else if(choice ==3)
     {
        amount +=200.82;
     }
     else if (choice == 4)
     {
        amount += 400.20;
     }
     else
        cout << "\n Invalid option. Try Again.\n";
        continue;
    

    cout << "\n Purchase Successful. \n";
    cout << "\n Total Spent : " << amount << endl;

    // Tracking users amount then updating discount
    if (amount >= 2000.00)
    {
        choiceptr = new PreferredCustomer4();
    }
    else if (amount >= 1500.00)
    {
        choiceptr = new PreferredCustomer3();

    }
    else if(amount >= 1000.00)
    {
        choiceptr = new PreferredCustomer2();
    }
    else if(amount >= 500.00)
    {
        choiceptr = new PreferredCustomer1();
    }
    if (choiceptr != nullptr)
    {
        choiceptr ->setAmount(amount);
        choiceptr->congratulations();
        cout << "\nDiscounted Total: $" << choiceptr->totalamount() << endl;

        choiceptr = nullptr;
    }
}
return 0;

}


















































