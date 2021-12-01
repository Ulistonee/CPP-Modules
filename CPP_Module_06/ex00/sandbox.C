# include <iostream>
# include <cmath>
# include <climits>

int 		main()
{
	float	a = 1.5f;
	int 	b = 1;
	char 	c = b;

	std::cout << static_cast<char>(b) << "\n";
	std::cout << b << "\n";
}