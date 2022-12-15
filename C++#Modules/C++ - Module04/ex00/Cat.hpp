#ifndef __CAT_H__
#define __CAT_H__
#include "Animal.hpp"

class Cat : public Animal
{
	public:
	    Cat ();
	    Cat (const Cat &_cat);
	    ~Cat ();
	    Cat & operator = (const Cat &_cat);
		virtual	void	makeSound(void) const;
};

#endif

