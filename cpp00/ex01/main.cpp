#include "Contact.hpp"
#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook phoneBook;
    
    while (input != "EXIT")
    {
        std::cout << "\n....::::MENU::::....\n" << std::endl;
        std::cout << "ADD" << std::endl;
        std::cout << "SEARCH" << std::endl;
        std::cout << "EXIT" << std::endl;
        std::cout << "Enter a command: "; 
        std::getline(std::cin, input);

        if (input == "ADD")
        {
            
            phoneBook.addBook();
        }
        else if (input == "SEARCH")
        {
            phoneBook.bookInfo();
        }
    }
}