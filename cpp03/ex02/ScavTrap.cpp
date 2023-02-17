/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:35:29 by amounach          #+#    #+#             */
/*   Updated: 2023/02/16 23:23:03 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default", 100, 50, 20)
{
    std::cout << "Scav Trap default constructer called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scav Trap destructer called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    *this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
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

ScavTrap::ScavTrap(std::string name)
{
    std::cout << GREEN << "Clap Trap constructer with param called" << RESET << std::endl;
    this->Name = name;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

void ScavTrap::attack(const std::string &target)
{
    if (HitPoint == 0 || EnergyPoint == 0)
        std::cout << "ScavTrap can't do anything he has no energy of hit point left" << std::endl;
    std::cout << "ScavTrap " << Name << " attacks " << target << " , causing " << AttackDamage << " points of damage!" << std::endl;
    EnergyPoint--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}