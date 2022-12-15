#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::PhoneBook_Search()
{
	int num = 0;
	if (index)
	{
		std::cout << std::left << std::setfill('_')
			<< std::setw(52) << "_" << std::endl << std::setfill(' ')
			<< "||   INDEX  | FIRSTNAME |  LASTNAME  |  NICK_NAME ||" << std::endl
			<< std::setfill(' ');
		for (int i=0;i<index;i++)
		{
				std::cout << std::setfill('-') << std::setw(52) << "-" << std::endl << std::setfill(' ');
				std::cout << std::right << "| " << std::setw(10) << i + 1 << "| ";
				book[i].display_Contact(book[i]);
				std::cout << std::endl;
				if (i + 1 == index)
					std::cout << std::setfill('=') << std::setw(52) << "=" << std::endl << std::setfill(' ');
		}
		std::cout << "/> Index of the entry to display: ";
		std::cin >> num;
		if (std::cin.eof())
		{
			std::cerr << "EOF when reading the index !!!" << std::endl;
			return ;
		}
		std::cin.ignore(1024, '\n');
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(1024, '\n');
			std::cout << "#The Index is wrong!!!" << std::endl;
			return ;
		}
		if (!(std::cin.fail()) && (num <= index && (num <= 8 && num > 0)))
			book[index].display_index(book[num - 1]);
		else
			std::cout << "#The Index is out of range!!!" << std::endl;
	}
	else
		std::cout << "#You have 0 contacts!!!" << std::endl;
}

void PhoneBook::PhoneBook_Add(PhoneBook &pb)
{
	Contact	cnt;
	
	if (pb.index >= 8)
		pb.num = 0;
	cnt.new_Contact(cnt);
	pb.book[pb.num] = cnt;
	pb.num++;
	if (pb.index < 8)
		pb.index++;
}