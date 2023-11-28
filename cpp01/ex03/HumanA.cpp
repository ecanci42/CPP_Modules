#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weap(weapon)
{

}


void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weap.getType() << std::endl;
}