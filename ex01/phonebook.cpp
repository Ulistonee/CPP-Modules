#include "phonebook.hpp"

void	Contact::truncate(std::string str, bool endl=true) {
	std::string			tmp;

	tmp = str.substr(0, 9) + ".";
	std:: cout.width(10);
	if (endl)
		std::cout << tmp << "|" << std::endl;
	else
		std::cout << tmp << "|";
}

bool		Contact::check_contact(Contact contact) {
	if (contact.index != 0)
		return true;
	else
		return false;
}

void		Contact::print_contact(Contact contact)
{
	std:: cout.width(10);
	std::cout << index << "|";
	std:: cout.width(10);
	if (first_name.length() > 10)
		truncate(first_name, false);
	else
		std::cout << first_name << "|";
	std:: cout.width(10);
	if (last_name.length() > 10)
		truncate(last_name);
	else
		std::cout << last_name << "|";
	std:: cout.width(10);
	if (nickname.length() > 10)
		truncate(nickname, true);
	else
		std::cout << nickname << "|" << std::endl;
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

int		Phonebook::executor() {

	if (this->cmd == "EXIT") {
		exit (0);
	}
	else if (this->cmd == "ADD")
	{
		contact[index].add(index);
		index++;
		if (index == 8)
			index = 0;
	}
	else if (this->cmd == "SEARCH")
		search();
	return (0);
}

void	Phonebook::search() {
	int		i;

	//output all available contacts
	//prompt for index
	//output particular index
	std:: cout.width(10);
	std::cout << "index" << "|";
	std:: cout.width(10);
	std::cout << "first name" << "|";
	std:: cout.width(10);
	std::cout << "last name" << "|";
	std:: cout.width(10);
	std::cout << "nickname" << "|" << std::endl;
	std:: cout.width(10);
	i = 0;
	while (i < 8)
	{
		if (contact->check_contact(contact[i]))
			contact[i].print_contact(contact[i]);
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
//	Contact			contact;
	int				i;

	i = 0;
	while (true)
	{
		phonebook.parser();
		phonebook.executor();
	}
}
