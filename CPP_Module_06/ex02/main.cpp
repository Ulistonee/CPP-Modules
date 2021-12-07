#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base		*generate(void)
{
	unsigned int			k;

	std::srand(time(NULL));
	k = std::rand() % 3;
	if (k == 0)
		return (new A);
	else if (k == 1)
		return (new B);
	else
		return (new C);
}

void 		identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type C" << std::endl;
	else
	{
		std::cout << "conversion is not ok\n";
	}
}

void		identify(Base& p)
{
	try
	{
		A instance;
		instance = dynamic_cast<A&>(p);
		std::cout << "Type A" << std::endl;
	}
	catch (const std::exception& e) {
	}
	try
	{
		B instance;
		instance = dynamic_cast<B&>(p);
		std::cout << "Type B" << std::endl;
	}
	catch (const std::exception& e) {
	}
	try
	{
		C instance;
		instance = dynamic_cast<C&>(p);
		std::cout << "Type C" << std::endl;
	}
	catch (const std::exception& e) {
	}
}


int			main()
{
	Base	*parent;

	parent = generate();
	identify(parent);
	identify(*parent);

	return (0);
}