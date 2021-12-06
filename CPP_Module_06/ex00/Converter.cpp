
#include "Converter.hpp"


Converter::Converter() {}

Converter::~Converter() {}

Converter::Converter(const Converter &) {}

Converter &Converter::operator=(const Converter &) {
	return (*this);
}

void 		Converter::converter(char *str){
	char 		*end;
	double 		rep;
	int 		flag;
	int 		flag2;

	end = str;
	rep = std::strtod(str, &end);
//	rep = atof(str);

	if (!isprint(static_cast<char>(rep)) && !std::isnan(rep) && !std::isinf(rep))
	{
		std::cout << "char: Non displayable" << std::endl;
		flag = 1;
	}
	if (std::isnan(rep) || std::isinf(rep))
	{
		std::cout << "char: impossible" << std::endl;
		flag = 1;
		std::cout << "int: impossible" << std::endl;
		flag2 = 1;

	}
	if (!flag)
	{
		std::cout << "char: " << static_cast<char>(rep) << std::endl;
	}
	if (!flag2)
	{
		std::cout << "int: " << static_cast<int>(rep) << std::endl;
	}
	else
	{
		if (rep < 0)
		{
			std::cout << "float: " << static_cast<float>(rep) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(rep) << std::endl;
		}
		else
		{
			std::cout << "float: " << static_cast<float>(rep) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(rep) << ".0"<< std::endl;
		}
	}

}