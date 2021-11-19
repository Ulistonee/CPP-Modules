#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	void 		learnMateria(AMateria*);
	AMateria* 	createMateria(std::string const & type);
	MateriaSource& operator=(const MateriaSource& src);
	MateriaSource(const MateriaSource& src);

private:
	AMateria* inventory[4];
};