#include "phonebook.hpp"

void	Phonebook::search() {
	int		i;

	//output all
	//prompt for index
	//output particular index
	i = 0;
	while (i < 8)
	{
		if (contact->first_name != "0")
		{

		}

	}
}

void	Contact::add()
{
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
		contact[index].add();
	}
	else if (this->cmd == "SEARCH")
	{
		search();
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
	Phonebook		phonebook;
	Contact			contact;
	int				i;

	i = 0;
//	for(int n = 0; n < 8; n++)
//	{
//		phonebook.contact[n].first_name = nullptr;
//		phonebook.contact[n].last_name = nullptr;
//		phonebook.contact[n].nickname = nullptr;
//		phonebook.contact[n].phone_number = 0;
//		phonebook.contact[n].darkest_secret = nullptr;
//	}

	while (true)
	{
		while (i < 8)
		{
			phonebook.parser();
			phonebook.executor(i);
			i++;
			if (i == 8)
			{
				i = 0;
			}

		}
	}
}
