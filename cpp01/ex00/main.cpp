#include "Zombie.hpp"

int main()
{
    Zombie nemesis("Nemesis");
    Zombie *bioHazard = newZombie("bioHazard");
    nemesis.announce();
    bioHazard->announce();
    randomChump("bioHazard Nemesis");
    delete bioHazard;

    return (0);
}