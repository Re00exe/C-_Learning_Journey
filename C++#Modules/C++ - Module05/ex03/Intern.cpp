#include "Intern.hpp"

/*-----------------------------------------------------*/
Intern::Intern (){
	std::cout << "Intern: Default constructor has been called" << std::endl;
}

/*-----------------------------------------------------*/
Intern::Intern (const Intern &_intern){
	(void)_intern;
	std::cout << "Intern: Copy constructor has been called" << std::endl;

}

/*-----------------------------------------------------*/
Intern::~Intern (){
   std::cout << "Intern: Destructor has been called" << std::endl;
}

/*-----------------------------------------------------*/
Intern & Intern::operator = (const Intern &_intern){
	(void)_intern;
   std::cout << "Intern: Copy assignment operator constructor has been called" << std::endl;
	return (*this);
}

Form *Intern::makeForm(std::string _FormName, std::string _target)
{
	int f=0;
	Form *ptr;

	std::string tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i=0;i<3;i++)
	{
		if (_FormName == tab[i])
			f = i + 1;
	}
	switch (f)
	{
	case 1:
		ptr = new ShrubberyCreationForm(_target);
		return (ptr);
		break;
	case 2:
		ptr = new RobotomyRequestForm(_target);
		return (ptr);
		break;
	case 3:
		ptr = new PresidentialPardonForm(_target);
		return (ptr);
		break;
	default:
		std::cout << "the Parmeter doesn't exist !";
		return (nullptr);
		break;
	}
 	return nullptr;
}
