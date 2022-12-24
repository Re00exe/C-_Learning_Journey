#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	std::string _target;
public:
    ShrubberyCreationForm ();
	ShrubberyCreationForm (std::string _target);
    ShrubberyCreationForm (const ShrubberyCreationForm &_form);
    ~ShrubberyCreationForm ();
    ShrubberyCreationForm & operator = (const ShrubberyCreationForm &_form);
	void	SAction(std::string _target);
	virtual void	execute(Bureaucrat const & executor) const;
};

#endif

