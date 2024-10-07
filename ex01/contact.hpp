

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
using std::string;

class Contact
{
private:
    string fullName;
    string phoneNb;
    string secret;
public:
    Contact();
    ~Contact();

    void setFullName(string fullName);
    void setPhoneNb(string phoneNb);
    void setSecret(string secret);

    string getFullName();
    string getPhoneNb();
    string getSecret() ;
};

Contact::~Contact() {}

#endif