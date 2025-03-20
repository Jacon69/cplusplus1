#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string command;
    while(true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
          
        if (!std::getline(std::cin, command)) {
            if (std::cin.eof()) {  // 🔹 Detectar EOF y salir completamente del programa
                std::cout << "\nEOF detected." << std::endl;
                break; // 🔹 Sale del bucle principal en lugar de continuar en un ciclo infinito
            }
            std::cin.clear();  // 🔹 Restablece el estado de cin
            continue;  // 🔹 Evita continuar con una entrada inválida
        }
        
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