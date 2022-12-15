#include "WrongAnimal.hpp"

/*-----------------------------------------------------*/
WrongAnimal::WrongAnimal (){
    std::cout  << "WrongAnimal Constructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
WrongAnimal::WrongAnimal (const WrongAnimal &_wronganimal){
    type = _wronganimal.type;
	std::cout  << "WrongAnimal Copy Constructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
WrongAnimal::~WrongAnimal (){
    std::cout  << "WrongAnimal Destructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
WrongAnimal & WrongAnimal::operator = (const WrongAnimal &_wronganimal){
    type = _wronganimal.type;
	
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound (void) const
{
	std::cout << "WrongAnimal Sound ???" << std::endl;
}