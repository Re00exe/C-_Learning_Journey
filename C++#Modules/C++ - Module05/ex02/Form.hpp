#ifndef __FORM_H__
#define __FORM_H__
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form{
private:
    const std::string 	_name;
	const int 			_grade_to_sign;
	bool				_signature;
	const int			_grad_to_exe;
public:
    Form ();
    Form (std::string name, const int gTs, const int gTe);
    Form (const Form &form);
    ~Form ();
    Form & operator = (const Form &form);
	
	const std::string&	getName(void) const;
	const int&			getGradeToSign(void) const;
	const bool&			getSignature(void) const;
	const int&			getGradeToExe(void) const;

	void	beSigned(Bureaucrat &_Bureaucrat);

	class GradeTooHighException: public std::exception
	{
		virtual const	char * what() const throw(); 
	};

	class GradeTooLowException : public std::exception
	{
		virtual const	char * what() const throw();
	};
	void	execute(Bureaucrat const & executor) const;

	virtual void Action() const =0;
};

std::ostream& operator<<(std::ostream& out, Form&_obj);

#endif
