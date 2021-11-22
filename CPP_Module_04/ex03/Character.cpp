#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
	name = "Default";
	std::cout << "default Character constructor is called\n";
}

Character::Character(std::string name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
	this->name = name;
	std::cout << "parameter Character constructor for " << this->name << " is called\n";
}

Character::Character(const Character& src)
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
	*this = src;
	std::cout << "copy Character constructor is called\n";
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << "default Character destructor is called\n";
}

Character& Character::operator=(const Character& src)
{
	if (this == &src)
		return *this;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = src.inventory[i]->clone();
	name = src.getName();
	std::cout << "assignation Character operator is called\n";
	return *this;
}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] == nullptr)
		{
			this->inventory[i] = m->clone();
			break;
		}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
}



