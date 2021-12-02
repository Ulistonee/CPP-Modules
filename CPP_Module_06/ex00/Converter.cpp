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

bool 		Converter::parser(char *str) {
	std::string 	line(str);

	if (!line.empty())
	{
		if (line.length() == 1 && !std::isdigit(str[0]))
		{
			char_rep = str[0];
			return (true);
		}
		else if (std::isdigit(str[0]) && std::stoi(line))
		{
			int_rep = std::stoi(line);
			return (true);
		}
		else if (std::stof(line))
		{
			float_rep = std::stof(line);
			return (true);
		}
		else if (std::stod(line))
		{
			double_rep = std::stod(line);
			return (true);
		}
	}
	std::cout << "the string is empty\n";
	return (false);
}

void 		Converter::converter(char *) {
	if (char_rep)
		std::cout << static_cast<char>(char_rep) << "\n";
	else if (int_rep)
		std::cout << static_cast<int>(int_rep) << "\n";
	else if (float_rep)
		std::cout << static_cast<float>(float_rep) << "\n";
	else if (double_rep)
		std::cout << static_cast<double>(double_rep) << "\n";
}