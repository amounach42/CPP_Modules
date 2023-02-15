#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
    std::cout << "Default constructer called" << std::endl;
    this->Name = "Target";
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "Destructer called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->Name = name;
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;

}

std::string ClapTrap::getName()
{
    return (this->Name);
}

int ClapTrap::getHitPoint()
{
    return (this->HitPoint);
}

int ClapTrap::getEnergyPoint()
{
    return (this->EnergyPoint);
}

int ClapTrap::getAttackDamage()
{
    return (this->AttackDamage);
}

void    ClapTrap::setName(std::string name)
{
    this->Name = name;
}

void    ClapTrap::setHitPoint(int hitPoint)
{
    this->HitPoint = hitPoint;
}

void ClapTrap::setEnergyPoint(int energyPoint)
{
    this->EnergyPoint = energyPoint;
}

void    ClapTrap::setAttackDamage(int attackDamage)
{
    this->AttackDamage = attackDamage;
}

void    ClapTrap::attack(const std::string & target)
{
    if (HitPoint == 0 || EnergyPoint == 0)
        std::cout << "ClapTrap can't do anything he has no energy of hit point left" << std::endl;
    std::cout << "ClapTrap " << Name << " attacks " << target << " , causing " << AttackDamage << " points of damage!" << std::endl;
    EnergyPoint--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << Name << " toke " << amount << " damage." << std::endl;
    HitPoint -= amount;
    std::cout << Name << " lose from hit points " <<  amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    HitPoint += amount;
    std::cout << "Get repaired by " << amount << std::endl;
    EnergyPoint--;
}