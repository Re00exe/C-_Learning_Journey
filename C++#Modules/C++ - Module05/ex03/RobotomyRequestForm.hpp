#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__
#include "Form.hpp"
class RobotomyRequestForm: public Form{
private:
    std::string _target;
public:
    RobotomyRequestForm ();
	RobotomyRequestForm (std::string _target);
    RobotomyRequestForm (const RobotomyRequestForm &a);
    ~RobotomyRequestForm ();
    RobotomyRequestForm & operator = (const RobotomyRequestForm &a);
	std::string getTarget(void) const;
	void Action() const;
};

#endif
