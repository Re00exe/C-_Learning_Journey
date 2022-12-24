#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	{
		Bureaucrat ekko("Ekko", 24);
		PresidentialPardonForm paper("BlackPaper");
		
		ekko.signForm(paper);
		paper.execute(ekko);
	}
	// std::cout << std::endl;
	// {
	// 	Bureaucrat Master_Yi("Master_Yi", 75);
	// 	ShrubberyCreationForm paper("RedPaper");
		
	// 	Master_Yi.signForm(paper);
	// 	paper.execute(Master_Yi);	
	// }
	// std::cout << std::endl;
	// {
	// 	Bureaucrat Akali("Akali", 44);
	// 	RobotomyRequestForm paper("GreenPaper");
		
	// 	Akali.signForm(paper);
	// 	paper.execute(Akali);	
	// }
	
	return (0);
}