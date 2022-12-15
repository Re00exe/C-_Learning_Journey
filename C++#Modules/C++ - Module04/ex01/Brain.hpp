#ifndef __BRAIN_H__
#define __BRAIN_H__
#include <iostream>

class Brain{
private:
    std::string	ideas[100];
public:
    Brain ();
    Brain (const Brain &_brain_copy);
    ~Brain ();
    Brain & operator = (const Brain &_brain);
	const std::string	*getIdeas() const;
};

#endif

