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
	if (contact._index != -1)
		return true;
	else
		return false;
}

bool			Contact::check_contact(Contact contact, int response) {
	if (contact._index == response)
		return true;
	else
		return false;
}

void		Contact::print_contact(Contact contact)
{
	std:: cout.width(10);
	std::cout << this->_index << "|";
	std:: cout.width(10);
	if (this->_first_name.length() >= 10)
		truncate(this->_first_name, false);
	else
		std::cout << this->_first_name << "|";
	std:: cout.width(10);
	if (this->_last_name.length() >= 10)
		truncate(this->_last_name, false);
	else
		std::cout << this->_last_name << "|";
	std:: cout.width(10);
	if (this->_nickname.length() >= 10)
		truncate(this->_nickname);
	else
		std::cout << this->_nickname << "|" << std::endl;
}

void		Contact::print_single_contact(Contact contact) {

	std::cout << "index:\t\t\t" << _index << std::endl;
	std::cout << "first_name:\t\t" << _first_name << std::endl;
	std::cout << "last_name:\t\t" << _last_name << std::endl;
	std::cout << "nickname:\t\t" << _nickname << std::endl;
	std::cout << "phone number:\t\t" << _phone_number << std::endl;
	std::cout << "darkest secret:\t\t" << _darkest_secret << std::endl;
}

void	Contact::add(int i)
{
	this->_index = i + 1;
	std::cout << "first_name:\n";
	getline(std::cin, this->_first_name);
	std::cout << "last name:\n";
	getline(std::cin, this->_last_name);
	std::cout << "nickname:\n";
	getline(std::cin, this->_nickname);
	std::cout << "phone number:\n";
	getline(std::cin, this->_phone_number);
	std::cout << "tell me your secret...\n";
	getline(std::cin, this->_darkest_secret);
}

int		Phonebook::executor() {

	if (this->_cmd == "EXIT")
		exit (0);
	else if (this->_cmd == "ADD")
	{
		contact[_index].add(_index);
		_index++;
		if (_index == 8)
			_index = 0;
	}
	else if (this->_cmd == "SEARCH")
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
		if (getline(std::cin, this->_cmd)) {
			if (this->_cmd != "ADD" && this->_cmd != "SEARCH" && this->_cmd != "EXIT")
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
