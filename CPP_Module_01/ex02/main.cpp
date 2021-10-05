# include <iostream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cstdlib>

int				main()
{
	std::string 		str;
	std::string 		*strPTR;
	std::string 		&strREF = str;

	str = "HI THIS IS BRAIN";
	strPTR = &str;
	std::cout << &str << std::endl;
	std::cout << strPTR << std::endl;
	std::cout << &strREF << std::endl;
	std::cout << *strPTR << std::endl;
	std::cout << strREF << std::endl;

	return (0);
}