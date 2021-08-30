#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cstdlib>

class Contact
{
private:
	int					_index;
	std::string			_first_name;
	std::string			_last_name;
	std::string			_nickname;
	std::string			_phone_number;
	std::string			_darkest_secret;

public:
	Contact()
	{
		_index = -1;
		_first_name = "";
		_last_name = "";
		_nickname = "";
		_phone_number = "";
		_darkest_secret = "";
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
	std::string			_cmd;
	Contact				contact[9];
	int					_index;

public:
	Phonebook()
	{
		_index = 0;
	}
	bool			parser();
	int				executor();
	void			search();
};

#endif