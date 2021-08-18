#include "phonebook.hpp"

void	Contact::add() {
	getline(std::cin, first_name);
	getline(std::cin, last_name);
	getline(std::cin, nickname);
	std::cin >> phone_number;
	std::cin.ignore(32767, '\n');
	getline(std::cin, darkest_secret);
}

int		Phonebook::executor(Contact &contact) {
	if (this->cmd == "EXIT")
	{
		exit (0);
	}
	else if (this->cmd == "ADD")
	{
		contact.add();
	}
}

void		Phonebook::parser() {

	while (true)
	{
		getline(std::cin, this->cmd);
		if (this->cmd != "ADD" && this->cmd != "SEARCH" && this->cmd != "EXIT")
		{
			continue;
		}
		else
		{
			return;
		}
	}
}


int			main()
{
	Phonebook phonebook;
	Contact contact;

	phonebook.parser();
	phonebook.executor(contact);

}
