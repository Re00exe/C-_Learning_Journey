#include "A_Animal.hpp"

/*-----------------------------------------------------*/
A_Animal::A_Animal (){
    std::cout  << "A_Animal Constructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
A_Animal::~A_Animal (){
    std::cout  << "A_Animal Destructor has been called " << std::endl;
}

A_Animal::A_Animal (const A_Animal &_animal){
	std::cout  << "Animal Copy Constructor has been called " << std::endl;
    type = _animal.type;
}

A_Animal & A_Animal::operator = (const A_Animal &_A_animal){
    type = _A_animal.type;
	return (*this);
}
