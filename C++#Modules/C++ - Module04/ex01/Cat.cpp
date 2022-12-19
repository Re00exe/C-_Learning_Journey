#include "Cat.hpp"

/*-----------------------------------------------------*/
Cat::Cat ()
{	
	type = "Cat";
	_my_brain = new Brain();

	std::cout << "Cat has been constructed" << std::endl;
}

/*-----------------------------------------------------*/
Cat::Cat (const Cat &_cat)
{	
	type = _cat.type;
	_my_brain = new Brain();
	_my_brain = _cat._my_brain;

	std::cout << "Cat has been Copy constructed" << std::endl;
}

/*-----------------------------------------------------*/
Cat::~Cat (){
	delete _my_brain;
	std::cout << "Cat has been Destructed" << std::endl;
}


/*-----------------------------------------------------*/
Cat & Cat::operator = (const Cat &_cat){
    type = _cat.type;
	_my_brain = new  Brain();
	_my_brain = _cat._my_brain;

	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MeooW MeoooW !!!" << std::endl;
}
