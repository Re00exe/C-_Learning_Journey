#include "PresidentialPardonForm.hpp"

/*-----------------------------------------------------*/
PresidentialPardonForm::PresidentialPardonForm (): Form("PresidentialPardonForm", 25, 5), _target("Default_TARGET"){
	std::cout << "PresidentialPardonForm: Constructor has been called" << std::endl;
}

 PresidentialPardonForm::PresidentialPardonForm(std::string _target): Form("PresidentialPardonForm", 25, 5), _target(_target){
	std::cout << "PresidentialPardonForm: Constructor has been called" << std::endl;
}

/*-----------------------------------------------------*/
PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm &_form): Form(_form){
	_target = _form._target;
    std::cout << "PresidentialPardonForm: Copy constructor has been called" << std::endl;
}

/*-----------------------------------------------------*/
PresidentialPardonForm::~PresidentialPardonForm (){
    std::cout << "PresidentialPardonForm: Destructor has been called " << std::endl;
}
/*-----------------------------------------------------*/
PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &_form){
	this->Form::operator=(_form);
	_target = _form._target;
	std::cout << "PresidentialPardonForm: Copy assignment operator has been called" << std::endl;
	
	return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const{
	return (this->_target);
}

void	PresidentialPardonForm::Action() const{
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}