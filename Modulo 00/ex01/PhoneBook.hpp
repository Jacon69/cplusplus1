#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <limits> // Necesario para std::numeric_limits

class PhoneBook
{
private:
    Contact contacts[8];
    size_t    contactCount;
public:
    PhoneBook();
    void addContact();
    void searchContacts() const;
};

#endif