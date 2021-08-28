#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstdlib>

class Contact
{
private:
	int					index;
	std::string			first_name;
	std::string			last_name;
	std::string			nickname;
	int					phone_number;
	std::string			darkest_secret;

public:
	Contact()
	{
		index = -1;
		first_name = "";
		last_name = "";
		nickname = "";
		phone_number = 0;
		darkest_secret = "";
	}
	void			add(int i);
	bool			check_contact(Contact contact);
	bool			check_contact(Contact contact, int response);
	void			print_contact(Contact contact);
	void 			print_single_contact(Contact contact);
	void			truncate(std::string str, bool endl);
};

class Phonebook
{
private:
	std::string			cmd;
	Contact				contact[9];
	int					index;

public:
	Phonebook()
	{
		index = 0;
	}
	void			parser();
	int				executor();
	void			search();
};

