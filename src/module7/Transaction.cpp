#include "Transaction.h"
using std::string;
using std::to_string;

Transaction::Transaction(int amt, string kind) : amount(amt), type(kind) {} 

string Transaction::Report()
{
    string report;
    report += '\t';
    report += type;
    report += '\t'
    report += to_string(amount);

    return report;
}