
// #ifndef PHONE_BOOK_HPP
// #define PHONE_BOOK_HPP

// #include "contact.hpp"
// #include <iomanip>

// class PhoneBook {
// private:
//     Contact contact[3];   // Fixed size array of contacts
//     int     index;        // Circular index for adding contacts
//     int     totalContact; // Keeps track of how many contacts are added (max 3)
// public:
//     PhoneBook();
//     void addContact(Contact newContact); 
//     void displayContact();
//     void displayContactDetails(int index);
// };

// #endif

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <istream>
#include "contact.hpp"
#include <iomanip>


class PhoneBook{
private:
    Contact contact[3];
    int     index;
	int		totalContact;
public:
	PhoneBook();
	// ~PhoneBook();

	void addContact(Contact newContact); 
	void displayContact();
	void displayContactDetails(int index);
};
// PhoneBook::~PhoneBook(){

// }

#endif