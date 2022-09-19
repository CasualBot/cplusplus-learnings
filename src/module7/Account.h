#include <vector>
#include <string>
#include "Transaction.h"


class Account
{
    private:
        int balance;
        std::vector<Transaction> log;

    public:
        Account();
        std::vector<std::string> Report();
        bool Deposit(int number);
        bool Withdraw(int number);
        int GetBalance() { return balance; }

};