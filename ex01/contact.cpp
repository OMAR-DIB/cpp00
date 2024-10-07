#include "contact.hpp"

Contact::Contact() : firstName(""), phoneNb("0"), secret("") {}

void Contact::setFirstName(string firstName)
{
    this->firstName = firstName;
}

void Contact::setLastName(string lastName) 
{
     this->lastName = lastName;
}

void Contact::setNickname(string nickname) 
{ 
    this->nickname = nickname; 
}

void Contact::setPhoneNb(string phonNb)
{
    this->phoneNb = phoneNb;
}

void Contact::setSecret(string secret)
{
    this->secret = secret;
}

string Contact::getFirstName()
{
    return this->firstName;
}
string Contact::getLastName() 
{ 
    return this->lastName; 
}
string Contact::getNickname()
{
    return this->nickname;
}
string Contact::getPhoneNb()
{
    return this->phoneNb;
}
string Contact::getSecret()
{
    return this->secret;
}

bool Contact::isEmpty()
{
    return firstName.empty() && lastName.empty() && nickname.empty() && phoneNb.empty() && secret.empty();
} 

// int main()
// {
//     Contact contact;

//     contact.setfirstName("ahmad");
//     std::cout << contact.getfirstName() << std::endl;
//     std::cout << contact.getPhoneNb() << std::endl;
//     return 0;
// }