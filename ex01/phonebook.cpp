#include "phonebook.hpp"

void	Phonebook::search() {
	int		i;

	i = 0;
	while (i < 8)
	{
		if (contact[i].first_name != nullptr)
			continue;


	}
}

void	Contact::add(){
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

int		Phonebook::executor(int index) {

	if (this->cmd == "EXIT")
	{
		exit (0);
	}
	else if (this->cmd == "ADD")
	{
		contact[index].add();
	}
	else if (this->cmd == "SEARCH")
	{

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
	while (true)
	{
		while (i < 8)
		{
			phonebook.parser();
			phonebook.executor(i);
			i++;
			if (i == 8)
				i = 0;
//			std::cout << phonebook.contact[0].first_name << '\n';
//			std::cout << phonebook.contact[1].first_name << '\n';
//			std::cout << phonebook.contact[2].first_name << '\n';
//			std::cout << phonebook.contact[3].first_name << '\n';
//			std::cout << phonebook.contact[4].first_name << '\n';
//			std::cout << phonebook.contact[5].first_name << '\n';
//			std::cout << phonebook.contact[6].first_name << '\n';
//			std::cout << phonebook.contact[7].first_name << '\n';
		}

	}
}
