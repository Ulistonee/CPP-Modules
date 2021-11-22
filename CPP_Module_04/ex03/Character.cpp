#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
	name = "Default";
}

Character::Character(std::string name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
	this->name = name;
}

Character::Character(const Character& src)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
	*this = src;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}

Character& Character::operator=(const Character& src)
{
	if (this == &src)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	for (int i = 0; i < 4; i++)
		this->inventory[i] = src.this->inventory[i]->clone();
	name = src.getName();
	return *this;
}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
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



