#include <iostream>

int main() 
{
	/**
	* Learning 4 different type(s) of varaiable declaration
	*/
	int i1 = 1; // initialize with value; this is a copy initialization
	std::cout << "i1 = " << i1 << std::endl;

	int i2; // uninitialize 
	i2 = 2; // set value to initialize; still considered a copy initialization
	std::cout << "i2 = " << i2 << std::endl;

	int i3(3); // initialize with a value; this is a DIRECT initialization versus a copy initialization
	std::cout << "i3 = " << i3 << std::endl;

	int i4{ 4 }; // direct initialization; this is most commonly used with Collection / Lists
	std::cout << "i4 = " << i4 << std::endl;

	char c1 = 'a'; // char 


	return 0;
}