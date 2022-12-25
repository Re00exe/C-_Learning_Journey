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
	std::string getTarget(void) const;
	void Action() const;
};

#endif

