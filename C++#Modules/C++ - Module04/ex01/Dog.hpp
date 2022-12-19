#ifndef __DOG_H__
#define __DOG_H__
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_my_brain;
	public:
	    Dog ();
	    Dog (const Dog &_dog);
   		~Dog ();
   		Dog & operator= (const Dog &_dog);
		virtual	void makeSound(void) const;
		
};

#endif

