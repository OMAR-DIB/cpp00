#include "phone_book.hpp"
#include <iostream>

using std::string;

void add(PhoneBook phoneBook)
{
    Contact contact;
    string input;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    contact.setFirstName(input);

    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    contact.setLastName(input);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    contact.setNickname(input);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    contact.setPhoneNb(input);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    contact.setSecret(input);

    if (contact.isEmpty())
    {
        std::cout << "All fileds should be complete.\n";
    }
    else{
        phoneBook.addContact(contact);
        std::cout << "Contact added successfully.\n";
    }
}

void searchContacts(PhoneBook phoneBook) {
    // if (phoneBook.getTotalContacts() == 0) {
    //     std::cout << "Phonebook is empty!\n";
    //     return;
    // }

    phoneBook.displayContact();

    // std::cout << "Enter the index of the contact you want to view: ";
    // std::string indexInput;
    // std::getline(std::cin, indexInput);

    // try {
    //     int index = std::stoi(indexInput);
    //     phoneBook.displayContactDetails(index);
    // } catch (std::invalid_argument& e) {
    //     std::cout << "Invalid index input!\n";
    // }
}
int main()
{
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            add(phoneBook);
        } else if (command == "SEARCH") {
            searchContacts(phoneBook);
        } else if (command == "EXIT") {
            std::cout << "Exiting program.\n";
            break;
        } else {
            std::cout << "Invalid command.\n";
        }
    }
    return 0;
}