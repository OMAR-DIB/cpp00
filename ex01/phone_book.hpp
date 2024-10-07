
#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <istream>
#include "contact.hpp"
#include <iomanip>


class PhoneBook{
private:
    Contact contact[3];
    int     index;
public:
	PhoneBook();
	// ~PhoneBook();

	void addContact(Contact newContact); 
	void displayContact();
};
// PhoneBook::~PhoneBook(){

// }

#endif