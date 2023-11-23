#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string.h>
# include <iostream>

class Contact
{
    public:
            std::string  name;
            std::string  surName;
            std::string  nickName;
            std::string  phoneNumber;
            std::string  darkSecret;

            Contact()
            {
                
            }
    
            Contact(std::string name, std::string surName, std::string nickName, std::string phoneNumber, std::string darkSecret)
            {
                this->name = name;
                this->surName = surName;
                this->nickName = nickName;
                this->phoneNumber = phoneNumber;
                this->darkSecret = darkSecret;
            }

            std::string get_firstname(void)
            {
                return (this->name);
            }
            std::string get_lastname(void)
            {
                return (this->surName);
            }
            std::string get_nickname(void)
            {
                return (this->nickName);
            }
            std::string get_number(void)
            {
                return (this->phoneNumber);
            }
            std::string get_secret(void)
            {
                return (this->darkSecret);
            }      
};

#endif