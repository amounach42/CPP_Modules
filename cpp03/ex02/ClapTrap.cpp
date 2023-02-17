/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:35:21 by amounach          #+#    #+#             */
/*   Updated: 2023/02/17 21:16:07 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string ClapTrap::getName() const
{
    return (this->Name);
}

int ClapTrap::getHitPoint() const
{
    return (this->HitPoint);
}

int ClapTrap::getEnergyPoint() const
{
    return (this->EnergyPoint);
}

int ClapTrap::getAttackDamage() const
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

ClapTrap::ClapTrap() 
{
    std::cout << "ClapTrap Default constructer called" << std::endl;
    this->Name = "Target";
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
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
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ClapTrap::ClapTrap(std::string name, int hitpoint, int energy, int damage)
{
    this->Name = name;
    this->HitPoint = hitpoint;
    this->EnergyPoint = energy;
    this->AttackDamage = damage;
}

void    ClapTrap::attack(const std::string & target)
{
    if (HitPoint == 0 || EnergyPoint == 0)
        std::cout << "ClapTrap can't do anything he has no energy of hit point left" << std::endl;
    std::cout << "ClapTrap " << Name << " attacks " << target << " , causing " << AttackDamage << " points of damage!" << std::endl;
    EnergyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoint == 0)
        std::cout << "Target already dead!" << std::endl;
    else
    {
        std::cout << Name << " toke " << amount << " damage." << std::endl;
        int p = HitPoint -= amount;
        if (p <= 0)
        {
            std::cout << RED << "Target died" << RESET << std::endl;
            HitPoint = 0;
        }
        else
            std::cout << Name << " lose from hit points " << amount << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoint == 0 || EnergyPoint == 0)
        std::cout << RED << "can't be repaired!" << RESET << std::endl;
    else
    {
        HitPoint += amount;
        std::cout << "Get repaired by " << amount << std::endl;
        EnergyPoint--;
    }
}