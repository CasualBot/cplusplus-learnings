#include <iostream>
#include <random>

int main() 
{
    int number;
    int max = 10; // upper bounds
    int min = 1; // lower bounds
    /**
     * https://stackoverflow.com/a/7560564/1440121
     **/
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(min, max); // define the range
    int guess = distr(gen);

    std::cout << "Enter '0' to exit program" << std::endl; 
    std::cout << "I'm thinking of a number between " << min << " and " << max << ". What is it? ";
    std::cin >> number;

    if(number == 0) {
        std::cout << "Exiting program";
        exit(1);
    };

    while(number != guess) {
        if(number == 0) {
            std::cout << "Exiting program";
            exit(1);
        };

        if(number != guess)
        {
            if(number > guess && number <= max) 
            {
                std::cout << "Too high! Guess again: ";
            }
            if(number < guess && number > 0) 
            {
                std::cout << "Too low! Guess again: ";    
            }
            if(number < 0) 
            {
                std::cout << "It's a positive number.... Guess again: ";
            }
            if(number > max)
            {
                std::cout << "WAY too high! Guess again: ";
            }
            std::cin >> number;
        } 
    }

    std::cout << "Correct! I was thinking of: " << guess << std::endl;
    exit(1);
}