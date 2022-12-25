#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	// {
	// 	Bureaucrat ekko("Ekko", 24);
	// 	PresidentialPardonForm paper("BlackPaper");
		
	// 	ekko.signForm(paper);
	// 	paper.execute(ekko);
	// }
	
	// {
	// 	Bureaucrat Master_Yi("Master_Yi", 75);
	// 	ShrubberyCreationForm paper("RedPaper");
		
	// 	Master_Yi.signForm(paper);
	// 	paper.execute(Master_Yi);	
	// }
	
	{
		Bureaucrat Akali("Akali", 1);
		RobotomyRequestForm paper("GreenPaper");
		
		Akali.signForm(paper);
		Akali.executeForm(paper);
		//paper.execute(Akali);	
	}
	
	return (0);
}