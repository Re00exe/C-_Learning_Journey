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

void ShrubberyCreationForm::SAction(std::string _target)
{
	std::fstream	_out_file;

	_out_file.open(_target += "", std::ios::out | std::ios::ate);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() < this->Form::getGradeToExe())
				S_Action(_target);
}
