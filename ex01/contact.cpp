#include "contact.hpp"

Contact::Contact() : fullName(""), phoneNb("77777"), secret("") {}

void Contact::setFullName(string fullName)
{
    this->fullName = fullName;
}

void Contact::setPhoneNb(string phonNb)
{
    this->phoneNb = phoneNb;
}

void Contact::setSecret(string secret)
{
    this->secret = secret;
}

string Contact::getFullName()
{
    return this->fullName;
}
string Contact::getPhoneNb()
{
    return this->phoneNb;
}
string Contact::getSecret()
{
    return this->secret;
}


int main(){
    Contact contact;

    contact.setFullName("ahmad");
    std::cout << contact.getFullName() << std::endl;
    std::cout << contact.getPhoneNb() << std::endl;
    return 0;
}