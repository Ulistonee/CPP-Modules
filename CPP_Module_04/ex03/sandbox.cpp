
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>

int 			main()
{
	std::string 	type = "hello";

	std::string &ref = type;

	ref = "hi";

	printf("%s\n", ref.c_str());
}