#include "headers.h"

/** 
 * Remember to use cppreference.com for method look up 
 */
int main()
{
    string name;
    while(name.empty())
    {
        name = question();
    }
    cout << std::endl;
    cout << "Nice to meet you " + name << std::endl;
}