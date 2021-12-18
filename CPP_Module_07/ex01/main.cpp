#include "iter.hpp"

int		main()
{
	int 			tab[] = {1, 2, 3, 4};
	char 			array[] = {'a', 'b', 'c', 'd'};
	std::string 	arr[3] = {
			"One",
			"Two",
			"Three"
	};
	iter(tab, sizeof(tab)/ sizeof(tab[0]), square);
	iter(array, sizeof(array)/ sizeof(array[0]), print);
	iter(arr, arr->length(), print);

	return 0;
}