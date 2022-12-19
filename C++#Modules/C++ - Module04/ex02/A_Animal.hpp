#ifndef __A_ANIMAL_H__
#define __A_ANIMAL_H__
#include <iostream>

class A_Animal{
protected:
		std::string	type;
public:
	A_Animal ();
    virtual	~A_Animal ();
    virtual std::string	getType(void) const = 0;
	virtual void	makeSound(void) const = 0;
};

#endif

