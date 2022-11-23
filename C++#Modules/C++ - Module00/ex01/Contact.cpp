#include "PhoneBook.hpp"
#include "Contact.hpp"

void get_input(std::string &cnt, std::string prompt)
{
	while(!std::cin.eof())
	{
		std::cout << prompt;
		std::getline(std::cin, cnt);
		if (cnt.empty())
			std::cout << "#Empty field!!!" << std::endl;
		else
			break ;
	}
}

void Contact::new_Contact(Contact &cnt)
{
	get_input(cnt.firstname, "> FirstName : ");
	get_input(cnt.lastname, "> LastName : ");
	get_input(cnt.nickname, "> Nick_Name : ");
	get_input(cnt.phone_number, "> Phone_Number : ");
	get_input(cnt.darkest_secret, "> Darkest_Secret : ");
}

std::string ft_truncate(std::string display)
{
	if (display.size() > 10)
	{
		display.resize(9);
		return	(display + ".");	
	}
	else
		return (display);
}

void Contact::display_Contact(Contact &cnt) const
{
	std::cout << std::right << std::setw(10) << ft_truncate(cnt.firstname) << " | "
		<< std::setw(10) << ft_truncate(cnt.lastname) << " | "
		<< std::setw(10) << ft_truncate(cnt.nickname) << " | ";
}

void Contact::display_index(Contact &cnt) const
{
	std::cout  << std::left 
		<< "* FirstName : " << cnt.firstname << std::endl
		<< "* Last_Name : " << cnt.lastname << std::endl
		<< "* Nick_Name : " << cnt.nickname << std::endl
		<< "* Phone_Number : " << cnt.phone_number << std::endl
		<< "* Darkest_Secret : " << cnt.darkest_secret << std::endl;
}
