#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
class Contact;
# include "contact.hpp"

class PhoneBook
{
    private:
            Contact book[8];
            int i = 0;

            
    public:
    
            PhoneBook(void)
            {
                std::cout << "_____Welcome to the PhoneBook_____\n";
            }

            ~PhoneBook(void)
            {
                std::cout << "Bye bye ~\n";
            }
            
            void addBook(Contact book)
            {
                while (i < 8)
                {
                    this->book[i] = book;
                    i++;
                    std::cout << "Contact added successfully." << std::endl;
                    if (i == 8)
                    {
                        i = 0;
                        break;
                    }
                    break;
                }
            }

            std::string format_name(std::string str)
            {
                std::string name;

                if (str.length() > 10)
                {
                    str.resize(10);
                    str[9] = '.';
                    return (str);
                }
                else
                {
                    unsigned long i = -1;
                    while (++i < 10 - str.length())
                        name.append(" ");
                    name += str;
                }
                return (name);
            }

            void print(Contact contact)
            {
                std::cout << "\nAll information that we have:\n\n";
                std::cout << "First Name: " << contact.get_firstname() << std::endl;
                std::cout << "Last Name: " << contact.get_lastname() << std::endl;
                std::cout << "Nickname: " << contact.get_nickname() << std::endl;
                std::cout << "Phone Number: " << contact.get_number() << std::endl;
                std::cout << "Darkest secret: " << contact.get_secret() << std::endl << std::endl;
            }

            void bookInfo()
            {
                int index = -1;

                std::cout << "\n ------------------------------------------- \n";
                std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
                std::cout << " ------------------------------------------- \n";

                while (++index < 8)
                {
                    std::cout << "|         " << index + 1;
                    std::cout << "|" << this->format_name(this->book[index].get_firstname());
                    std::cout << "|" << this->format_name(this->book[index].get_lastname());
                    std::cout << "|" << this->format_name(this->book[index].get_nickname()) << "|" << std::endl;
                    
                }
                std::cout << " ------------------------------------------- \n";
                std::string str = "";
                while (str == "" && !std::cin.eof())
                {
                    std::cout << "Enter the index: ";
                    std::getline(std::cin, str);
                    if (!(str[0] >= '1' && str[0] <= '8'))
                    {
                        std::cout << "Invalid index! Try again!\n";
                        str = "";
                    }
                    else
                        this->print(this->book[str[0] - '0' - 1]);
                }

            }
};

#endif