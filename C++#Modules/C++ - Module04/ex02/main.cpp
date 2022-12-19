#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	//A_Animal cat1;
	const A_Animal* i = new Cat();
	const A_Animal* j = new Cat();

	delete j;
	delete i;
	
	// Dog basic;
	// {
	// 	Dog tmp(basic);
	// }
	// 	std::cout << basic.getBrain()[0] << std::endl;
	
	return 0;
}