#include "Brain.hpp"

/*-----------------------------------------------------*/
Brain::Brain (){
   for(int i=0 ;i<100 ;i++)
		ideas[i] = "Empty!";
	std::cout << "> Brain: Constructor has been called!" << std::endl; 
}

/*-----------------------------------------------------*/
Brain::Brain (const Brain &_brain_copy){
	for(int i=0; i<100; i++)
		ideas[i] = _brain_copy.ideas[i];
	std::cout << "> Brain: Copy Constructor has been called!" << std::endl;
}

/*-----------------------------------------------------*/
Brain::~Brain (){
    std::cout << "> Brain: Destructor has been called!" << std::endl;
}

/*-----------------------------------------------------*/
Brain & Brain::operator = (const Brain &_brain){
	for(int i=0; i<100; i++)
		ideas[i] = _brain.ideas[i];
	
	return (*this);
}

const std::string *Brain::getIdeas(void) const
{
	return (ideas);	
}
