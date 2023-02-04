#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie
{
private:
    std::string name;

public:
    void announce(void);
    std::string  getName() const;
    void  setName(std::string);
    Zombie();
    Zombie(std::string);
};

Zombie* newZombie(std::string);
void    randomChump(std::string);
#endif