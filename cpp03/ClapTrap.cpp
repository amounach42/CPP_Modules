#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}
ClapTrap::~ClapTrap() {}
ClapTrap::ClapTrap(std::string name)
{
    this->Name = name;
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
