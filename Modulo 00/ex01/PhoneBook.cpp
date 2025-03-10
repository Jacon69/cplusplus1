# include "PhoneBook.hpp"

//Contructor
PhoneBook::PhoneBook(): contactCount(0) {}
void PhoneBook::addContact()
{
    std::string first, last, nick, phone, secret;

    std::cout << "Enter Firs Name:";
    std::getline(std::cin, first);
    std::cout << "Enter Last Name:";
    std::getline(std::cin, last);
    std::cout << "Enter Nickname:";
    std::getline(std::cin, nick);
    std::cout << "Enter phone number:";
    std::getline(std::cin, phone);
    std::cout << "Enter Darkest Secret:";
    std::getline(std::cin, secret);
    Contact newContact;
    newContact.setContactInfo(first, last, nick, phone, secret);

    if (contactCount < 8){
        contacts[contactCount] = newContact;
    }
    else
    {
        contacts[contactCount % 8] = newContact;
    }

    contactCount++;
}
void PhoneBook::searchContacts() const
{
    if (contactCount == 0)
    {
        std::cout << "No Contact in the phonebook." << std::endl;
        return;
    }
    std::cout << "| Index    |First Name|Last Name | Nickname |" << std::endl;
    for ( size_t i= 0 ; i< (contactCount < 8 ? contactCount : 8);i++)
        {
            contacts[i].displaySummary(i);
        }
    std::cout << " \nEnter the index of the contact to view: ";
    int index;

    while (!(std::cin >> index)) 
        {
            std::cin.clear(); // Restablece el estado de std::cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpia la entrada
            std::cerr << "Invalid input! Please enter a valid number: ";
        }
    std::cin.ignore();

    if (index <0 || index >= (int) (contactCount < 8 ? contactCount : 8))
    {
        std::cerr << "Invalid index!" << std::endl;
    }
    else{
        contacts[index].displayContact();
    }
}