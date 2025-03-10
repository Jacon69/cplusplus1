#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string command;
    while(true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin,command);
        if (command== "ADD")
        {
            phonebook.addContact();
        }
        else if(command=="SEARCH")
        {
            phonebook.searchContacts();
        }
        else if(command=="EXIT")
        {
            break;
        }
        else{
            std::cout << "Invalid Command!" << std:: endl;
        }
        
    }
}