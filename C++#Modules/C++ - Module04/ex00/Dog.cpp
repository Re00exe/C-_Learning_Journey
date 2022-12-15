#include "Dog.hpp"

/*-----------------------------------------------------*/
Dog::Dog (){
	type = "Dog";
	std::cout << "Dog has been constructed" << std::endl;
}

/*-----------------------------------------------------*/
Dog::Dog (const Dog &_dog){
	type = _dog.type;
	std::cout  << "Dog Copy Constructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
Dog::~Dog (){
	std::cout << "Dog has been Destructed" << std::endl;
}


/*-----------------------------------------------------*/
Dog & Dog::operator = (const Dog &_dog){
    type = _dog.type;
	return (*this);
}


void	Dog::makeSound(void) const
{
	std::cout << "WooF  WooF !!!" << std::endl;
}
