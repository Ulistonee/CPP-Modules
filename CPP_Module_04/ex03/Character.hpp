#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
public:
	Character();
	Character(std::string name);
	~Character();
	Character(const Character& src);
	Character& operator=(const Character& src);


	std::string const & getName() const;
	void		equip(AMateria* m);
	void		unequip(int idx);
	void		use(int idx, ICharacter& target);

private:
	AMateria*		inventory[4];
	std::string 	name;
};