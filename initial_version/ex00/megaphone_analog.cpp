#include <iostream>
#include <string>

class Args
		{
		public:
			int		m_argc;
			char	**m_argv;

			void	print() const
			{
				int		i;
				int		j;

				i = 1;
				while (m_argv[i])
				{
					if (i == m_argc - 1)
					{
						j = 0;
						while (m_argv[i][j])
						{
							if (m_argv[i][j] >= 'a' && m_argv[i][j] <= 'z')
							{
								m_argv[i][j] = (m_argv[i][j] - 'a') + 'A';
							}
							std::cout << m_argv[i][j];
							j++;
						}
						std::cout << "\n";
					}
					else
					{
						j = 0;
						while (m_argv[i][j])
						{
							if (m_argv[i][j] >= 'a' && m_argv[i][j] <= 'z') {
								m_argv[i][j] = (m_argv[i][j] - 'a') + 'A';
							}
							std::cout << m_argv[i][j];
							j++;
						}
					}
					i++;
				}
			}
		};

int			main(int argc, char **argv)
{
	Args arguments;

	arguments.m_argc = argc;
	arguments.m_argv = argv;

	if (argc == 1)
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		arguments.print();
	return 0;
}
