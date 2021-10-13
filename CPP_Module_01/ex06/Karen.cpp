#include "Karen.hpp"

void 		Karen::debug() {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void 		Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void 		Karen::warning() {
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve bee coming here for years and you just started working here last month.\n";
}

void 		Karen::error() {
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void 		Karen::karenFilter(std::string level) {
	int 	i = 0;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*fcnPtr[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	while (i < 3 && level != levels[i])
		i++;
	(this->*(fcnPtr[i]))();
	switch (i)
	{
		case 0:
		{
			std::cout << "[ DEBUG ]\n";
			(this->*(fcnPtr[0]))();
		}
		case 1:
		{
			std::cout << "[ INFO ]\n";
			(this->*(fcnPtr[1]))();
		}
		case 2:
		{
			std::cout << "[ WARNING ]\n";
			(this->*(fcnPtr[2]))();
		}
		case 3:
		{
			std::cout << "[ ERROR ]\n";
			(this->*(fcnPtr[3]))();
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}