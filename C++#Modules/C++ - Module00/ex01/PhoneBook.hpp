#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__
#include<iostream>
#include<iomanip>
#include"Contact.hpp"

class PhoneBook
{
private:
	int		index;
	int		num;
	Contact	book[9];
public:
	void	PhoneBook_Add(PhoneBook &book);
	void	PhoneBook_Search();
};
#endif
