
#include "Converter.hpp"


Converter::Converter() {}

Converter::~Converter() {}

Converter::Converter(const Converter &) {}

Converter &Converter::operator=(const Converter &) {
	return (*this);
}

void 		Converter::converter(char *str){
	float 		rep;

	rep = atof(str);

	if (!isprint(static_cast<char>(rep)) && !std::isnan(rep))
	{
		std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(rep) << std::endl;
		std::cout << "float: " << static_cast<float>(rep) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(rep) << ".0"<< std::endl;
	}
	else if (std::isnan(rep))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(rep) << "f" << std::endl;
		std::cout << "double: " << static_cast<double >(rep) << std::endl;
	}
	else
	{
		std::cout << "char: " << static_cast<char>(rep) << std::endl;
		std::cout << "int: " << static_cast<int>(rep) << std::endl;
		std::cout << "float: " << static_cast<float>(rep) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double >(rep) << ".0"<< std::endl;
	}


}