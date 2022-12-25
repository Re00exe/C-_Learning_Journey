#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__
#include "Form.hpp"
class PresidentialPardonForm: public Form{
private:
    std::string _target;
public:
    PresidentialPardonForm ();
    PresidentialPardonForm (std::string _target);
    PresidentialPardonForm (const PresidentialPardonForm &a);
    ~PresidentialPardonForm ();
    PresidentialPardonForm & operator = (const PresidentialPardonForm &a);
	std::string getTarget(void) const;
	void Action() const;
};

#endif

