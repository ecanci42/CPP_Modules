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

            // get
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
            // set
            void set_firstname(std::string name)
            {
                this->name = name;
            }
            void set_lastname(std::string surName)
            {
                this->surName = surName;
            }
            void set_nickname(std::string nickName)
            {
                this->nickName = nickName;
            }
            void set_number(std::string phoneNumber)
            {
                this->phoneNumber = phoneNumber;
            }
            void set_secret(std::string darkSecret)
            {
                this->darkSecret = darkSecret;
            }
};

#endif