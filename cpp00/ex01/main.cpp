#include "contact.hpp"
#include <iostream>
#include "phonebook.hpp"

int main()
{
    std::string input, name, surName, nickName, phoneNumber, darkSecret;
    PhoneBook phoneBook; //phoneBook çalışmadı, bunu çözzzz
    
    while (input != "EXIT")
    {
        std::cout << "\n....::::MENU::::....\n" << std::endl;
        std::cout << "ADD" << std::endl;
        std::cout << "SEARCH" << std::endl;
        std::cout << "EXIT" << std::endl;
        std::cout << "Enter a command: "; 
        std::cin >> input;

        std::cin.ignore();

        if (input == "ADD")
        {
            
            std::cout << "Name Enter: ";
            std::getline(std::cin, name);
            std::cout << "Surname Enter: ";
            std::getline(std::cin, surName);
            std::cout << "Nickname Enter: ";
            std::getline(std::cin, nickName);
            std::cout << "Number Enter: ";
            std::getline(std::cin, phoneNumber);
            std::cout << "Secret Enter: ";
            std::getline(std::cin, darkSecret);

            Contact cnt1(name, surName, nickName, phoneNumber, darkSecret);
            phoneBook.addBook(cnt1);
        }
        else if (input == "SEARCH")
        {
            phoneBook.bookInfo();
        }
    }
}