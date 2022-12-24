#include "Bureaucrat.hpp"

/*--------------------------------------------------------*/
Bureaucrat::Bureaucrat (): name("name"), grade(150){
	std::cout << "Bureaucrat: Default Constructor has been Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name){
	if (_grade < 1)
			throw GradeTooHighException();
	else if (_grade > 150)
			throw GradeTooLowException();
	grade = _grade;
	std:: cout << "Bureaucrat: " << this->name << " Constructor has been called" << std::endl;
}

/*--------------------------------------------------------*/
Bureaucrat::Bureaucrat (const Bureaucrat &_bureaucrat): name(_bureaucrat.name){
	grade = _bureaucrat.grade;
	std:: cout << "Bureaucrat: Copy Constructor has been called" << std::endl;
}

/*--------------------------------------------------------*/
Bureaucrat::~Bureaucrat (){
	std::cout << "Bureaucrat: " << this->name << " has been Destructed" << std::endl;
}

/*--------------------------------------------------------*/
Bureaucrat & Bureaucrat::operator = (Bureaucrat &_bureaucrat){
	(void)_bureaucrat;
	return (*this);
}

void	Bureaucrat::setGrade(int _grade)
{
	this->grade = _grade;
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

const	char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("#Bureaucrat: Grade Too Low !!!");
}

const	char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("#Bureaucrat: Grade Too High !!!");
}

std::ostream& operator<<(std::ostream& out, Bureaucrat&_obj){
	out << _obj.getName() << ", Grade: " << _obj.getGrade();
	return (out);
}

void	Bureaucrat::ReGrade(void)
{
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void	Bureaucrat::DeGrade(void)
{
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

void	Bureaucrat::signForm(Form &_form)
{
	if (getGrade() <= _form.getGradeToSign())
		std :: cout << getName() << " Signed " << _form.getName() << std::endl; 
	else
		std::cout << getName() << " couldn't sign " << _form.getName() <<
		" because " << getGrade() << " is Lower then "<< _form.getGradeToSign() << std::endl;
}
