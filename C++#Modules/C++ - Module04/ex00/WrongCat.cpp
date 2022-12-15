#include "WrongCat.hpp"

/*-----------------------------------------------------*/
WrongCat::WrongCat (){
	type = "WrongCat";
	std::cout << "WrongCat has been constructed" << std::endl;
}

/*-----------------------------------------------------*/
WrongCat::WrongCat (const WrongCat &_wrongcat){
	type = _wrongcat.type;
	std::cout  << "WrongCat Copy Constructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
WrongCat::~WrongCat (){
	std::cout << "WrongCat has been Destructed" << std::endl;
}


/*-----------------------------------------------------*/
WrongCat & WrongCat::operator = (const WrongCat &_wrongcat){
    type = _wrongcat.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "MeooW MeoooW !!!" << std::endl;
}
