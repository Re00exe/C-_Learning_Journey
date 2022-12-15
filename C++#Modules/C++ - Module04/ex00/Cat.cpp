#include "Cat.hpp"

/*-----------------------------------------------------*/
Cat::Cat (){
	type = "Cat";
	std::cout << "Cat has been constructed" << std::endl;
}

/*-----------------------------------------------------*/
Cat::Cat (const Cat &_cat){
	std::cout  << "Cat Copy Constructor has been called " << std::endl;
	type = _cat.type;	
}

/*-----------------------------------------------------*/
Cat::~Cat (){
	std::cout << "Cat has been Destructed" << std::endl;
}


/*-----------------------------------------------------*/
Cat & Cat::operator = (const Cat &_cat){
    type = _cat.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MeooW MeoooW !!!" << std::endl;
}
