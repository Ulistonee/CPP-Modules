#include <iostream>

void		print_argv(int argc, int count_of_argc, char *argv[])
{
	int		n;

	for (n = 1; n < argc; n++)
	{
		if (n == count_of_argc - 1)
			std::cout << "" << argv[n] <<"\n";
		else
			std::cout << "" << argv[n] <<" ";
	}
}

int			main(int argc, char *argv[])
{
	int		count_of_argc;

	count_of_argc = 0;
	while (count_of_argc < argc)
		count_of_argc++;
	if (argc == 1)
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		print_argv(argc, count_of_argc, argv);
	return 0;
}