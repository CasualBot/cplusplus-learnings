#include "headers.h"

string question() 
{    
    string question = "What is your name? ";
    string name;
    cout << question;

    if(cin.get() == '\n') 
    { 
        cout << "Please enter a name." << std::endl;
        cout << question; 
    }

    if(isspace(cin.get()))
    {
        cout << "Please enter a name." << std::endl;
        cout << question; 
    }

    cin >> name;

    if(name.length() <= 0)
    {
        name.erase(remove(name.begin(), name.end(), ' '), name.end());
        if(name.length() <= 0)
        {
            cout << "Please enter a name." << std::endl;
            cout << question; 
        }
    }
    string firstPosition = question.substr(question.find(' ') + 1);
    if(firstPosition.length() == 0 || firstPosition == " ") {
        cout << "Please enter a name." << std::endl;
        cout << question; 
    }
    
    return name;
}
