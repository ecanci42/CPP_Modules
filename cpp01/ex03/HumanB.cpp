#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weap = NULL;
}

void HumanB::attack()
{
    if (weap == NULL)
        std::cout << this->name << " attacked with fist" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weap->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weap = &weapon;
}