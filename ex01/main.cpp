#include "phone_book.hpp"
#include <iostream>

void add(PhoneBook& phoneBook) {
    Contact contact;
    std::string input;

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

    if (contact.isEmpty()) {
        std::cout << "All fields must be complete.\n";
    } else {
        phoneBook.addContact(contact);
        std::cout << "Contact added successfully.\n";
    }
}

void searchContacts(PhoneBook& phoneBook) {
    phoneBook.displayContact();

    std::cout << "Enter the index of the contact you want to view: ";
    std::string indexInput;
    std::getline(std::cin, indexInput);

    try {
        int index = std::stoi(indexInput);
        phoneBook.displayContactDetails(index);
    } catch (std::invalid_argument& e) {
        std::cout << "Invalid index input!\n";
    }
}

int main() {
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



// #include "phone_book.hpp"
// #include <iostream>

// using std::string;

// void add(PhoneBook& phoneBook)  // Pass by reference
// {
//     Contact contact;
//     string input;

//     std::cout << "Enter first name: ";
//     std::getline(std::cin, input);
//     contact.setFirstName(input);  // Assuming setFirstName is defined

//     std::cout << "Enter last name: ";
//     std::getline(std::cin, input);
//     contact.setLastName(input);   // Assuming setLastName is defined

//     std::cout << "Enter nickname: ";
//     std::getline(std::cin, input);
//     contact.setNickname(input);   // Assuming setNickname is defined

//     std::cout << "Enter phone number: ";
//     std::getline(std::cin, input);
//     contact.setPhoneNb(input);

//     std::cout << "Enter darkest secret: ";
//     std::getline(std::cin, input);
//     contact.setSecret(input);

//     // Ensure the contact is not empty
//     if (contact.isEmpty()) {  // Assuming isEmpty checks all fields are filled
//         std::cout << "All fields must be complete.\n";
//     }
//     else {
//         phoneBook.addContact(contact);
//         std::cout << "Contact added successfully.\n";
//     }
// }

// void searchContacts(PhoneBook& phoneBook) {
//     // if (phoneBook.getTotalContacts() == 0) {
//     //     std::cout << "Phonebook is empty!\n";
//     //     return;
//     // }

//     phoneBook.displayContact();

//     std::cout << "Enter the index of the contact you want to view: ";
//     std::string indexInput;
//     std::getline(std::cin, indexInput);

//     try {
//         int index = std::stoi(indexInput);
//         phoneBook.displayContactDetails(index);
//     } catch (std::invalid_argument& e) {
//         std::cout << "Invalid index input!\n";
//     }
// }

// int main() {
//     PhoneBook phoneBook;  // Instantiate PhoneBook
//     std::string command;

//     while (true) {
//         std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
//         std::getline(std::cin, command);

//         if (command == "ADD") {
//             add(phoneBook);  // Pass phoneBook by reference
//         } else if (command == "SEARCH") {
//             searchContacts(phoneBook);  // Display contacts
//         } else if (command == "EXIT") {
//             std::cout << "Exiting program.\n";
//             break;
//         } else {
//             std::cout << "Invalid command.\n";
//         }
//     }
//     return 0;
// }
