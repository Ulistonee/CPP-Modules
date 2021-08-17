#include "phonebook.hpp"

int		Phonebook::parser() {

	while (1)
	{
		std::cin >> this->cmd;
		if (this->cmd != "ADD" || this->cmd != "SEARCH" || this->cmd != "EXIT")
		{
			continue;
		}
		else
		{
			return (0);
		}
	}
}


int			main()
{
	Phonebook phonebook;

	if (!phonebook.parser())

}

