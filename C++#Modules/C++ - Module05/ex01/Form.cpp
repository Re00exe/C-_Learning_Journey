#include "Form.hpp"

/*-----------------------------------------------------*/
Form::Form () : _name("Default_Form"), _grade_to_sign(150), _signature(0), _grad_to_exe(150){
	std::cout << ">Form: Default constructor has been called" << std::endl;
}

Form::Form (std::string name, const int gTs, const int gTe):_name(name), _grade_to_sign(gTs),  _signature(0), _grad_to_exe(gTe){
	if (gTs < 1 || gTe < 1)
			throw GradeTooHighException();
	else if (gTe > 150 || gTs > 150)
			throw GradeTooLowException();
	
	std::cout << ">Form: " << name << " constructor has been called" << std::endl;
}

/*-----------------------------------------------------*/
Form::Form (const Form &form):_name(form._name), _grade_to_sign(form._grade_to_sign), _signature(form._signature), _grad_to_exe(form._grad_to_exe){
   std::cout << ">Form : Copy constructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
Form::~Form (){
	std::cout << ">Form: Destructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
Form & Form::operator= (const Form &form){
	(void)form;
	return (*this);
}

const std::string	&Form::getName(void) const
{
	return (_name);
}

const int& Form::getGradeToSign(void) const{
	return (_grade_to_sign);
}

const bool& Form::getSignature(void) const{
	return (_signature);
}

const int& Form::getGradeToExe(void) const{
	return (_grad_to_exe);
}

void	Form::beSigned(Bureaucrat &_Bureaucrat){
	if (_Bureaucrat.getGrade() <= getGradeToSign())
		_signature = 1;
	else
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw(){
		return ("#Form: GradeTooHighException");
	};

const char *Form::GradeTooLowException::what() const throw(){
		return ("#Form: GradeTooLowException");
	};

std::ostream& operator<<(std::ostream& out, Form&_obj){

	out << ">> Form: " << _obj.getName() << "\n" 
	<< "- Grade To Sign: " << _obj.getGradeToSign() << "\n"
	<< "- Grade To Exec: "<< _obj.getGradeToExe() << "\n"
	<< "- Signature: " << _obj.getSignature() << std::endl;

	return (out);
}