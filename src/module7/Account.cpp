#include "Account.h"
using std::vector;
using std::string;
using std::to_string;

Account::Account() : balance(0) {}

vector<string> Account::Report()
{
    vector<string> report;
    report.push_back("Balance is " + to_string(balance));
    report.push_back("Transactions: ");

    for(auto t : log )
    {
        report.push_back(t.Report());
    } 
    report.push_back("----------------------");

    return report;
}

bool Account::Deposit(int depositAmount) 
{
    if(depositAmount <= 0) 
    {
         return false;
    } else {
        log.push_back(Transaction(depositAmount, "Deposit"));
        balance += depositAmount;

        return true;
    }
    return false;
}

bool Account::Withdraw(int withdrawAmount)
{

    if(balance <= 0)
    {
        return false;
    }

    if(balance >= withdrawAmount) {

        log.push_back(Transaction(withdrawAmount, "Withdraw"));
        balance -= withdrawAmount;

        return true;

    }

    return false;
}

int Account::GetBalance()
{
    return balance;
}
