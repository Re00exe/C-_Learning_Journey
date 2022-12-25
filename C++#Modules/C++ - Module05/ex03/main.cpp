#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	// {
	// 	Bureaucrat ekko("Ekko", 24);
	// 	PresidentialPardonForm paper("BlackPaper");
		
	// 	ekko.signForm(paper);
	// 	paper.execute(ekko);
	// }
	
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}

	return (0);
}