#ifndef __INTERN_H__
#define __INTERN_H__
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
public:
    Intern ();
    Intern (const Intern &_intern);
    ~Intern ();
    Intern & operator = (const Intern &a);
	Form	*makeForm(std::string _FormName, std::string _target);
};

#endif

