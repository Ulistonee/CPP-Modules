#include "Converter.hpp"


int 	main(int argc, char *argv[])
{
	Converter	converter;

	if (argc == 2)
		converter.converter(argv[1]);
	else
		std::cout << "wrong number of arguments" << std::endl;
	return (0);
}