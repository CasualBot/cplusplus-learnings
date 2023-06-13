#include <iostream>
#include "Account.h"
using std::cout;

int main()
{ 
    // TODO: Finish exercise.md
    Account a1;
    if(a1.Deposit(90))
    {
        cout << "Deposting $90 in to account" << std::endl;
    }

    if(a1.Withdraw(50))
    {
        cout << "Withdrawing $50..." << std::endl;
    }

    if(a1.Withdraw(100))
    {
        cout << "Withdrawing $100..." << std::endl;
    }

    cout << std::endl;
    for(auto report : a1.Report())
    {

        cout << report; 
    }

    return 0;

}
 
