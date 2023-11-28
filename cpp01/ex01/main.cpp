#include "Zombie.hpp"

int main()
{
    Zombie *zombie;

    zombie = zombieHorde(5, "Zombie");

    delete[] zombie;
    
   //son zombi ölürken ismi yazılmadı bu macde kontrol edilecek
   //system("leaks zombie");
}