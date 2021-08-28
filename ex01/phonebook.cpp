#include "phonebook.hpp"

void	Contact::truncate(std::string str, bool endl=true) {
	std::string			tmp;

	tmp = str.substr(0, 8) + ".";
	std:: cout.width(10);
	if (endl)
		std::cout << tmp << "|" << std::endl;
	else
		std::cout << tmp << "|";
}

bool			Contact::check_contact(Contact contact) {
	if (contact.index != -1)
		return true;
	else
		return false;
}

bool			Contact::check_contact(Contact contact, int response) {
	if (contact.index == response)
		return true;
	else
		return false;
}

void		Contact::print_contact(Contact contact)
{
	std:: cout.width(10);
	std::cout << this->index << "|";
	std:: cout.width(10);
	if (this->first_name.length() >= 10)
		truncate(this->first_name, false);
	else
		std::cout << this->first_name << "|";
	std:: cout.width(10);
	if (this->last_name.length() >= 10)
		truncate(this->last_name, false);
	else
		std::cout << this->last_name << "|";
	std:: cout.width(10);
	if (this->nickname.length() >= 10)
		truncate(this->nickname);
	else
		std::cout << this->nickname << "|" << std::endl;
}

void		Contact::print_single_contact(Contact contact) {

	std::cout << "index:\t\t\t" << index << std::endl;
	std::cout << "first_name:\t\t" << first_name << std::endl;
	std::cout << "last_name:\t\t" << last_name << std::endl;
	std::cout << "nickname:\t\t" << nickname << std::endl;
	std::cout << "phone number:\t\t" << phone_number << std::endl;
	std::cout << "darkest secret:\t\t" << darkest_secret << std::endl;
}

void	Contact::add(int i)
{
	this->index = i + 1;
	std::cout << "first_name:\n";
	getline(std::cin, this->first_name);
	std::cout << "last name:\n";
	getline(std::cin, this->last_name);
	std::cout << "nickname:\n";
	getline(std::cin, this->nickname);
	std::cout << "phone number:\n";
	getline(std::cin, this->phone_number);
	std::cout << "tell me your secret...\n";
	getline(std::cin, this->darkest_secret);
}

int		Phonebook::executor() {

	if (this->cmd == "EXIT")
		exit (0);
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

int		check_response(std::string response)
{
	int		res;

	const char *cstr = response.c_str();
	res = atoi(cstr);
	return (res);
}

void	Phonebook::search() {
	int				i;
	std::string		response;
	int				res;

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
	std::cout << "please enter contact ID:\n";
	std::cin >> response;
	std::cin.ignore(32767, '\n');
	if ((res = check_response(response)))
	{
		i = 0;
		while (i < 8)
		{
			if (contact[i].check_contact(contact[i], res))
				contact[i].print_single_contact(contact[i]);
			i++;
		}
	}
	else
		std::cout << "input is incorrect\n";
}

bool		Phonebook::parser() {
	while (true)
	{
		std::cout << "please enter your command:\n";
		if (getline(std::cin, this->cmd)) {
			if (this->cmd != "ADD" && this->cmd != "SEARCH" && this->cmd != "EXIT")
				continue;
			else
				return true;
		}
		if (std::cin.eof())
			std::cout << "EOF reached" << std::endl;
		else
			std::cout << "Some IO error" << std::endl;
		return false;
	}
}

int			main()
{
	Phonebook		phonebook;

	while (true)
	{
		if (!phonebook.parser())
			break;
		phonebook.executor();
	}
}
