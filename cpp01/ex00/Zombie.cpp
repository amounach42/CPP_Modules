#include "Zombie.hpp"

std::string    Zombie::getName() const
{
    return this->name;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

void    Zombie::announce(void)
{
   std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    name = "amounach";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}


Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}

void    randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce(); 
}