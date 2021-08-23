#include "phonebook.hpp"

void		Contact::print()
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << darkest_secret << std::endl;
}

bool		Contact::check_contact(Contact contact) {
	if (contact.index != 0)
		return true;
	else
		return false;
}

void	Contact::add(int i)
{
	index = i + 1;
	std::cout << "first_name:\n";
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

int		Phonebook::executor(int index) {

	if (this->cmd == "EXIT")
		exit (0);
	else if (this->cmd == "ADD")
	{
		contact[index].add(index);
	}
	else if (this->cmd == "SEARCH")
	{
		search();
	}
	return (0);
}

void	Phonebook::search() {
	int		i;

	//output all available contacts
	//prompt for index
	//output particular index
	i = 0;
	while (i < 8)
	{
		if (contact[i].check_contact(contact[i]))
			contact[i].print();
		i++;
	}
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
	Phonebook		phonebook;
	Contact			contact;
	int				i;

	i = 0;
	while (true)
	{
		while (i < 8)
		{
			phonebook.parser();
			phonebook.executor(i);
			i++;
			if (i == 8)
				i = 0;
		}
	}
}
