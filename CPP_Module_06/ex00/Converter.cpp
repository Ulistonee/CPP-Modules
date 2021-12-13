#include "Converter.hpp"
Converter::Converter() {}

Converter::~Converter() {}

Converter::Converter(const Converter &) {}

Converter &Converter::operator=(const Converter &) {
	return (*this);
}

void 		Converter::printChar(char *str) {
	char 		*end = nullptr;
	double 		rep;

	rep = std::strtod(str, &end);
	if (!*end)
	{
		if (!isprint(static_cast<char>(rep)) && !std::isnan(rep) && !std::isinf(rep))
		{
			std::cout << "char: Non displayable" << std::endl;
		}
		else if (std::isnan(rep) || std::isinf(rep))
		{
			std::cout << "char: impossible" << std::endl;
		}
		else
		{
			std::cout << "char: " << static_cast<char>(rep) << std::endl;
		}
	}
	else
	{
		std::string 		line(str);

		if (line.length() == 1)
		{
			if (!isprint(str[0]))
			{
				std::cout << "char: Non displayable" << std::endl;
			}
			else
			{
				std::cout << "char: " << str[0] << std::endl;
			}
		}
		else
		{
			std::cout << "char: impossible" << std::endl;
		}
	}
}

void 		Converter::printInt(double rep) {
	if (std::isnan(rep) || std::isinf(rep))
	{
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		std::cout << "int: " << static_cast<int>(rep) << std::endl;
	}
}

void 		Converter::printFloat(double rep) {
	double 	i = 0;
	double 	n = 0;

	i = modf(rep, &n);
	if (i)
	{
		std::cout << "float: " << static_cast<float>(rep) << "f" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(rep) << ".0f" << std::endl;
	}
}

void 		Converter::printDouble(double rep) {
	double 	i = 0;
	double 	n = 0;

	i = modf(rep, &n);
	if (i)
	{
		std::cout << "double: " << static_cast<double>(rep) << std::endl;
	}
	else
	{
		std::cout << "double: " << static_cast<double>(rep) << ".0" << std::endl;
	}
}

void 		Converter::converter(char *str){
	double 		rep;

	rep = atof(str);
	rep = atof(str);
	this->printChar(str);
	this->printInt(rep);
	this->printFloat(rep);
	this->printDouble(rep);
}