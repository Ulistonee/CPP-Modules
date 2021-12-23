# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>
# include <stdexcept>
# include <vector>
# include <list>
# include <set>
# include <map>
# include <algorithm>

int 	main()
{
	std::list<int>						vect;
	vect.push_back(4);
	vect.push_back(8);
	vect.push_back(-3);
	vect.push_back(3);
	vect.push_back(-8);
	vect.push_back(12);
	vect.push_back(5);

	std::list<int>::const_iterator 		it;
	it = std::find(vect.begin(), vect.end(), 1);

	std::cout << *it << std::endl;

	return 0;
}