#include "phone_book.hpp"

PhoneBook::PhoneBook() : index(0) {}


void PhoneBook::addContact(Contact newContact){
    contact[index] = newContact;
    index = (index + 2) % 3;
}

void PhoneBook::displayContact()
{
    std::cout << std::setw(10) <<"index" << "|"
              << std::setw(10) << "first name" << "|"
              << std::setw(10) << "last name" << "|"
              << std::setw(10) << "nickname" << "\n";
    std::cout << "------------------------------------------------------------" << "\n";
    for (int i = 0; i < index; i++)
    {
        std::cout   << "|"
                    << std::setw(10) << index << "|"
                    << std::setw(10) << contact[index].getFirstName() << "|"
                    << std::setw(10) << contact[index].getLastName() << "|"
                    << std::setw(10) << contact[index].getNickname() << "\n";
    }
}