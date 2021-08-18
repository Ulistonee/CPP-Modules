#include "phonebook.hpp"

void	Contact::add() {
	std::cout << "first name:\n";
	getline(std::cin, first_name);
	std::cout << "last name:\n";
	getline(std::cin, last_name);
	std::cout << "nickname:\n";
	getline(std::cin, nickname);
	std::cout << "phone number:\n";
	std::cin >> phone_number;
	std::cin.ignore(32767, '\n');
	std::cout << "tell me your secret...\n";
	getline(std::cin, darkest_secret);
}

int		Phonebook::executor(Contact &contact) const {
	if (this->cmd == "EXIT")
	{
		exit (0);
	}
	else if (this->cmd == "ADD")
	{
		contact.add();
	}
	return (0);
}

void		Phonebook::parser() {

	while (true)
	{
		std::cout << "please enter your command:\n";
		getline(std::cin, this->cmd);
		if (this->cmd != "ADD" && this->cmd != "SEARCH" && this->cmd != "EXIT")
			continue;
		else
			return;
	}
}


int			main()
{
	Phonebook phonebook;
	Contact contact;

	phonebook.parser();
	phonebook.executor(contact);
}
