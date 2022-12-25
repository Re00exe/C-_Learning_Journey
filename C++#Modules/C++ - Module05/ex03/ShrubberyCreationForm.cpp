#include "ShrubberyCreationForm.hpp"
#include "fstream"
/*-----------------------------------------------------*/
ShrubberyCreationForm::ShrubberyCreationForm (): Form("ShrubberyCreationForm", 145, 137), _target("Default_TARGET"){
	std::cout << "ShrubberyCreationForm: Constructor has been called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm (std::string _target): Form("ShrubberyCreationForm", 145, 137), _target(_target){
	std::cout << "ShrubberyCreationForm: Constructor has been called" << std::endl;
}

/*-----------------------------------------------------*/
ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &_form): Form(_form){
	_target = _form._target;
    std::cout << "ShrubberyCreationForm: Copy constructor has been called" << std::endl;
}

/*-----------------------------------------------------*/
ShrubberyCreationForm::~ShrubberyCreationForm (){
    std::cout << "ShrubberyCreationForm: Destructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &_form){
	this->Form::operator=(_form);
	_target = _form._target;
	std::cout << "ShrubberyCreationForm: Copy assignment operator has been called" << std::endl;
	
	return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const{
	return (this->_target);
}

void ShrubberyCreationForm::Action() const
{
	std::fstream	_out_file;

	_out_file.open(getTarget() += "_shrubbery", std::ios::out | std::ios::ate);
	_out_file <<" \
	\n                  ___\
	\n            _,-'**   ****`--.\
    \n         ,-'          __,,-- \
    \n       ,'    __,--****dF      )\
    \n      /   .-*Hb_,--**dF      /\
    \n    ,'       _Hb ___dF*-._,-'\
    \n  ,'      _,-****   **--..__\
    \n (     ,-'                  `.\
    \n  `._,'     _   _             ;\
    \n   ,'     ,' `-'Hb-.___..._,-'\
    \n        ,'*Hb.-'HH`-.dHF*\
    \n    `--'   *Hb  HH  dF*\
    \n            *Hb HH dF\
    \n             *HbHHdF\
    \n              |HHHF\
    \n              |HHH|\
    \n              |HHH|\
    \n              |HHH|\
    \n              |HHH|\
    \n              dHHHb\
    \n            .dFd|bHb.\
    \n  o       .dHFdH|HbTHb.\
	\n Y  |  __,dHHFdHH|HHhoHHb.\
	*" << std::endl;
}
