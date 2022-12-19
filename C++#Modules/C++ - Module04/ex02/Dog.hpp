#ifndef __DOG_H__
#define __DOG_H__
#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
	private:
		Brain	*_my_brain;
	public:
	    Dog ();
	    Dog (const Dog &_dog);
   		~Dog ();
		const std::string	*getBrain(void) const;
   		Dog & operator= (const Dog &_dog);
		virtual	void makeSound(void) const;
		virtual std::string	getType(void) const;
		
};

#endif

