#include "Zombie.hpp"

int main()
{
    Zombie *zombie;

    zombie = zombieHorde(5, "Zombie");

    delete[] zombie;
}