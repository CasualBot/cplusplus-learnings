#include <string>

class Transaction
{
    private:
        int amount;
        std::string type;
    public:
        Transaction(int amount, std::string kind);
        std::string Report();  
};