#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "iostream"
#include "Weapon.hpp"

class HumanB 
{
    private:
        std::string name;
        Weapon *weap;

    public:
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon &weapon);
};

#endif 
