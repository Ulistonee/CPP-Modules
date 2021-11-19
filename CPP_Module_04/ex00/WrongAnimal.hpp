#ifndef WRONG_ANIMAL_H
#define WRONG_ANIMAL_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>

class WrongAnimal
		{
		public:
			WrongAnimal();
			WrongAnimal(const WrongAnimal &other);
			virtual ~WrongAnimal();
			WrongAnimal	&operator=(const WrongAnimal &other);


			std::string		getType() const;
			void			makeSound() const;
		protected:
			std::string 		m_type;
		};


#endif