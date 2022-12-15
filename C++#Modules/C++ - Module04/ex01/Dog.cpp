#include "Dog.hpp"

/*-----------------------------------------------------*/
Dog::Dog (){
	type = "Dog";
	_my_brain = new Brain();

	std::cout << "Dog has been constructed" << std::endl;
}

/*-----------------------------------------------------*/
Dog::Dog (const Dog &_dog){
	type = _dog.type;
	_my_brain = new Brain();
	_my_brain = _dog._my_brain;

	std::cout << "Dog has been Copy constructed" << std::endl;
}

/*-----------------------------------------------------*/
Dog::~Dog (){
	std::cout << "Dog has been Destructed" << std::endl;
}


/*-----------------------------------------------------*/
Dog & Dog::operator= (const Dog &_dog){

    type = _dog.type;
	_my_brain = new Brain();
	_my_brain = _dog._my_brain;

	return (*this);
}


void	Dog::makeSound(void) const
{
	std::cout << "WooF  WooF !!!" << std::endl;
}
