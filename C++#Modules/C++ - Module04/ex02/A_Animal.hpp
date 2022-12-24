#ifndef __A_ANIMAL_H__
#define __A_ANIMAL_H__
#include <iostream>

class A_Animal{
protected:
		std::string	type;
public:
	A_Animal ();
	A_Animal (const A_Animal &_animal);
    virtual	~A_Animal ();
    A_Animal & operator = (const A_Animal &_animal);
	virtual std::string	getType(void) const = 0;
	virtual void	makeSound(void) const = 0;
};

#endif

