#include "RobotomyRequestForm.hpp"

/*-----------------------------------------------------*/
RobotomyRequestForm::RobotomyRequestForm (): Form("RobotomyRequestForm", 72, 45), _target("Default_TARGET"){
	std::cout << "RobotomyRequestForm: Constructor has been called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm (std::string _target): Form("RobotomyRequestForm", 145, 137), _target(_target){
	std::cout << "RobotomyRequestForm: Constructor has been called" << std::endl;
}

/*-----------------------------------------------------*/
RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm &_form): Form(_form){
	_target = _form._target;
    std::cout << "RobotomyRequestForm: Copy constructor has been called" << std::endl;
}

/*-----------------------------------------------------*/
RobotomyRequestForm::~RobotomyRequestForm (){
    std::cout << "RobotomyRequestForm: Destructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm  &_form){
	this->Form::operator=(_form);
	_target = _form._target;
	std::cout << "RobotomyRequestForm: Copy assignment operator has been called" << std::endl;
	
	return (*this);
}

std::string RobotomyRequestForm::getTarget(void) const{
	return (this->_target);
}

void RobotomyRequestForm::Action() const
{
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully " << std::endl;
	else
		std::cout << getTarget() << " not robotomized !" << std::endl;
}