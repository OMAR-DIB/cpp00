 
#include "phone_book.hpp"

PhoneBook::PhoneBook() : index(0)  , totalContact(0) {}


void PhoneBook::addContact(Contact newContact){
    contact[index] = newContact;
    index = (index + 1) % 3;
    if (totalContact < 3)
    {
        totalContact++;
    }
}

void PhoneBook::displayContact()
{
    std::cout << std::setw(6) << "Index"
			  << " | " << std::setw(11) << "First Name"
			  << " | " << std::setw(11) << "Last Name"
			  << " | " << std::setw(11) << "Nick Name"
			  << std::endl;
    
    for (int i = 0; i < this->totalContact; i++) {
        std::cout << std::setw(6) << i
				  << " | " << std::setw(11) << this->contact[i].getFirstName()
				  << " | " << std::setw(11) << this->contact[i].getLastName()
				  << " | " << std::setw(11) << this->contact[i].getNickname()
				  << std::endl;
    }
    std::cout << std::endl;
}

void PhoneBook::displayContactDetails(int index) {
    if (index >= 0 && index < totalContact) {
        Contact& cont = contact[index];
        std::cout << "First Name: " << cont.getFirstName() << "\n";
        std::cout << "Last Name: " << cont.getLastName() << "\n";
        std::cout << "Nickname: " << cont.getNickname() << "\n";
        std::cout << "Phone Number: " << cont.getPhoneNb() << "\n";
        std::cout << "Darkest Secret: " << cont.getSecret() << "\n";
    } else {
        std::cout << "Invalid index!\n";
    }
}
// #include "phone_book.hpp"
// #include <iostream>

// PhoneBook::PhoneBook() : index(0), totalContact(0) {}  // Initialize totalContact

// void PhoneBook::addContact(Contact newContact) {
//     contact[index] = newContact;  // Add the contact at current index
//     index = (index + 1) % 3;      // Circular index
//     if (totalContact < 3) {
//         totalContact++;  // Only increment if we haven't filled all 3 contacts
//     }
// }

// void PhoneBook::displayContact() {
//     std::cout << std::setw(6) << "Index"
//               << " | " << std::setw(11) << "First Name"
//               << " | " << std::setw(11) << "Last Name"
//               << " | " << std::setw(11) << "Nick Name"
//               << std::endl;

//     for (int i = 0; i < totalContact; i++) {  // Loop only up to totalContact
//         std::cout << std::setw(6) << i
//                   << " | " << std::setw(11) << contact[i].getFirstName()
//                   << " | " << std::setw(11) << contact[i].getLastName()
//                   << " | " << std::setw(11) << contact[i].getNickname()
//                   << std::endl;
//     }
//     std::cout << std::endl;
// }

// void PhoneBook::displayContactDetails(int index) {
//     if (index >= 0 && index < totalContact) {  // Check bounds before accessing
//         Contact& cont = contact[index];
//         std::cout << "First Name: " << cont.getFirstName() << "\n";
//         std::cout << "Last Name: " << cont.getLastName() << "\n";
//         std::cout << "Nickname: " << cont.getNickname() << "\n";
//         std::cout << "Phone Number: " << cont.getPhoneNb() << "\n";
//         std::cout << "Darkest Secret: " << cont.getSecret() << "\n";
//     } else {
//         std::cout << "Invalid index!\n";
//     }
// }