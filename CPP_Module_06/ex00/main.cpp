#include "Converter.hpp"


int 	main(int argc, char *argv[])
{
	Converter	converter;

	if (argc == 2)
	{
		converter.parser(argv[1]);
		converter.converter(argv[1]);
	}
	return (0);
}