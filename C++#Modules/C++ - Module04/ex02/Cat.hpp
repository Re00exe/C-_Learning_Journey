#ifndef __CAT_H__
#define __CAT_H__
#include "A_Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal
{
	private:
		Brain	*_my_brain;
	public:
	    Cat ();
	    Cat (const Cat &a);
		~Cat ();
	    Cat & operator = (const Cat &a);
		const std::string	*getBrain(void) const;
		virtual	void	makeSound(void) const;
		virtual std::string	getType(void) const;

};

#endif

