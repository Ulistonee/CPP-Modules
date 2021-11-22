#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource& src);
	MateriaSource& operator=(const MateriaSource& src);


	void 			learnMateria(AMateria*);
	AMateria* 		createMateria(std::string const & type);


private:
	AMateria*		inventory[4];
};