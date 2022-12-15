#ifndef __DOG_H__
#define __DOG_H__
#include "Animal.hpp"


class Dog : public Animal
{
	public:
	    Dog ();
	    Dog (const Dog &a);
   		~Dog ();
   		Dog & operator = (const Dog &a);
		virtual	void makeSound(void) const;
};

#endif

