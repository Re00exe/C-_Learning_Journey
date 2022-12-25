#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;
class Bureaucrat{
private:
   const std::string 	name;
   int					grade;
public:
    Bureaucrat ();
    Bureaucrat (const Bureaucrat &_bureaucrat);
	Bureaucrat(std::string _name,int _grade);
    ~Bureaucrat ();
	
	void	setGrade(int _grade);
	int	getGrade(void) const;
	std::string	getName(void) const;
    
	void	ReGrade(void);
	void	DeGrade(void);
	
	void	signForm(Form &_form);
	void	executeForm(Form const &_form);

	Bureaucrat & operator = (Bureaucrat &_bureaucrat);
	

	class GradeTooHighException: public std::exception
	{
		virtual const	char * what() const throw(); 
	};

	class GradeTooLowException : public std::exception
	{
		virtual const	char * what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, Bureaucrat&_obj);
#endif

