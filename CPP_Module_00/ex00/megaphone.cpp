#include <iostream>

void		print_argv(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		if (i == argc - 1)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] = (argv[i][j] - 'a') + 'A';
				std::cout << argv[i][j];
				j++;
			}
			std::cout << "\n";
		}
		else
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] = (argv[i][j] - 'a') + 'A';
				std::cout << argv[i][j];
				j++;
			}
		}
		i++;
	}
}

int			main(int argc, char *argv[])
{
	if (argc == 1)
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		print_argv(argc, argv);
	return 0;
}