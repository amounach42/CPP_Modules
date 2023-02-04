#include "Zombie.hpp"

int main ()
{
    Zombie zombie;

    // zombie.setName("amounach");
    zombie.announce();
    Zombie *zombie1 = newZombie("new zombie");
    zombie1->announce();
    delete zombie1;
    randomChump("chump zombie");
}
