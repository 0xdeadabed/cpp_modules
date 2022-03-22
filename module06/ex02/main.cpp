/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 3/19/22.
 */

#include <Base.hpp>
#include <A.hpp>
#include <B.hpp>
#include <C.hpp>

#include <iostream>

Base *generate() {
	std::srand(time(NULL));

	int chance = rand() % 3;
	switch (chance) {
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void identify(Base *p){
	if (dynamic_cast<A*>(p) != NULL) {
		std::cout << "The object pointed by p is A" << std::endl;
	} else if (dynamic_cast<B*>(p) != NULL) {
		std::cout << "The object pointed by p is B" << std::endl;
	} else if (dynamic_cast<C*>(p) != NULL) {
		std::cout << "The object pointed by p is C" << std::endl;
	} else {
		std::cout << "Error: couldn't identify the object" << std::endl;
	}
}

void identify(Base &p) {
	try {
		A &tmp = dynamic_cast<A&>(p);
		(void)tmp;
		std::cout << "The object referenced by p is A" << std::endl;
	} catch (...) {}
	try {
		B &tmp= dynamic_cast<B&>(p);
		(void)tmp;
		std::cout << "The object referenced by p is B" << std::endl;
	} catch (...) {}
	try {
		C &tmp = dynamic_cast<C&>(p);
		(void)tmp;
		std::cout << "The object referenced by p is C" << std::endl;
	} catch (...) {}
}

int main(void) {
	Base *base;

	base = generate();
	identify(base);
	identify(*base);
	delete base;
	return 0;
}
