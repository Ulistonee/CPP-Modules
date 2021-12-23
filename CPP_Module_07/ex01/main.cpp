#include "iter.hpp"

int		main()
{
	int 			tab[] = {1, 2, 3, 4};
	char 			array[] = {'a', 'b', 'c', 'd'};

	iter(tab, sizeof(tab)/ sizeof(tab[0]), square);
	iter(array, sizeof(array)/ sizeof(array[0]), print);

	return 0;
}