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
# include <stack>

int 	main()
{
	std::stack<int>		stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);

//	stack.pop();
//	stack.pop();

	while (!stack.empty())
	{
		std::cout << ' ' << stack.top();
		stack.pop();
	}
	while (!stack.empty())
	{
		std::cout << ' ' << stack.top();
//		stack.pop();
	}
	std::cout << std::endl;
	return 0;
}