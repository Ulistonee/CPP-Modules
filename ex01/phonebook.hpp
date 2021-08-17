#include <iostream>
#include <string>

class Contact
{
public:
	std::string			first_name;
	std::string			last_name;
	std::string			nickname;
	int					phone_number;
	std::string			darkest_secret;
};

class Phonebook
{
public:
//	Phonebook();
//	Phonebook(Phonebook const &arg);
	std::string			cmd;
	Contact				Azat;
	Contact				Aizhan;

	int	parser();
};

