#include <iostream>
#include <string>

class Args
		{
		public:
			int		m_argc;
			char	**m_argv;

			int	ft_toupper(int c)
			{
				if (c >= 'a' && c <= 'z')
				{
					c = (c - 'a') + 'A';
				}
				return (c);
			}

			char	*to_capital(char *str)
			{
				int		i;

				i = 0;
				while (str[i])
				{
					str[i] = ft_toupper(str[i]);
					i++;
				}
				return (str);
			}

			void	print(int count_of_argc)
			{
				int		n;

				for (n = 1; n < m_argc; n++)
				{
					if (n == count_of_argc - 1)
						std::cout << "" << to_capital(m_argv[n]) <<"\n";
					else
						std::cout << "" << to_capital(m_argv[n]) <<" ";
				}
			}
		};

int			main(int argc, char **argv)
{
	Args arguments{argc, argv};

	int		count_of_argc;

	count_of_argc = 0;
	while (count_of_argc < argc)
		count_of_argc++;
	if (argc == 1)
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		arguments.print(count_of_argc);
	return 0;
}