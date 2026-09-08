// Weather.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Hello whats the weather outside today?\n";
	std::cout << "Type: \n";
	std::cout << "1 for sunny\n";
	std::cout << "2 for cloudy\n";
	std::cout << "3 for rainy\n";
	std::cout << "4 for snowy\n";
	int x;
	std::cout << "Enter your choice: ";
	std::cin >> x;
	while (x < 1 || x > 4) {
		std::cout << "Invalid input. Please enter a number between 1 and 4: ";
		std::cin >> x;
	}
	if (x == 1) {
		std::cout << "It's sunny outside today!\n";
	}
	else if (x == 2) {
		std::cout << "It's cloudy outside today!\n";
	}
	else if (x == 3) {
		std::cout << "It's rainy outside today!\n";
	}
	else if (x == 4) {
		std::cout << "It's snowy outside today!\n";
	}
	else
	{
		std::cout << "Invalid input. Please enter a number between 1 and 4.\n";
	}
	
}