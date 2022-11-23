#ifndef __CONTACT_H__
#define __CONTACT_H__
#include<iostream>
#include<iomanip>

class Contact
{
private:
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
public:
	void display_Contact(Contact &cnt) const;
	void display_index(Contact &cnt) const;
	void new_Contact(Contact &cnt);
};
#endif
