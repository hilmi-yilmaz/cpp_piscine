
#include <iostream>
#include <exception>

class Base {
	virtual void	dummy() {};
};

class Derived: public Base {
	int a;
};

int main(void) {
	try {
		Base*	pba = new Derived;
		Base*	pbb = new Base;

		Derived*	pd;

		pd = dynamic_cast<Derived*>(pba);
		if (pd == 0) {
			std::cout <<"Null pointer on first type-cast.\n";
		}

		pd = dynamic_cast<Derived*>(pbb);
		if (pd == 0) {
			std::cout <<"Null pointer on second type-cast.\n";
		}
	}
	catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	return 0;
}