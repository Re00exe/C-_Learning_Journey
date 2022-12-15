#include "Animal.hpp"

/*-----------------------------------------------------*/
Animal::Animal (){
    std::cout  << "Animal Constructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
Animal::Animal (const Animal &_animal){
	std::cout  << "Animal Copy Constructor has been called " << std::endl;
    type = _animal.type;
}

/*-----------------------------------------------------*/
Animal::~Animal (){
    std::cout  << "Animal Destructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
Animal & Animal::operator = (const Animal &_animal){
    type = _animal.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound (void) const
{
	std::cout << "Animal Sound ???" << std::endl;
}