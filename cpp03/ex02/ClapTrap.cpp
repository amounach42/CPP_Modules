/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:35:21 by amounach          #+#    #+#             */
/*   Updated: 2023/02/16 20:42:40 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
    std::cout << "ClapTrap Default constructer called" << std::endl;
    this->Name = "Target";
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "Destructer called!" << std::endl;
}
/*Copy constructer*/
ClapTrap::ClapTrap(const ClapTrap &obj)
{
    *this = obj;
}
/*Copy assingement operature*/
ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    if (this != &obj)
    {
        this->Name = obj.Name;
        this->HitPoint = obj.HitPoint;
        this->EnergyPoint = obj.EnergyPoint;
        this->AttackDamage = obj.AttackDamage;
    }
    return (*this);
}
ClapTrap::ClapTrap(std::string name)
{
    this->Name = name;
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name, int hitpoint, int energy, int damage)
{
    this->Name = name;
    this->HitPoint = hitpoint;
    this->EnergyPoint = energy;
    this->AttackDamage = damage;
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