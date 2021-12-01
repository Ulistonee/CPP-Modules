#include "Converter.hpp"

Converter::Converter() {}

Converter::~Converter() {}

Converter::Converter(const Converter &) {}

Converter &Converter::operator=(const Converter &) {
	return (*this);
}

char 		Converter::toChar(char *str) {
	return (str[0]);
}

void 		Converter::converter(char *str) {
	std::string 	line(str);
	char 			value;
	if (!line.empty())
	{
		value = toChar(str);
		std::cout << value << "\n";
	}
	else
	{
		std::cout << "the string is empty\n";
	}
}