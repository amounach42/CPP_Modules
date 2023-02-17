/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:34:35 by amounach          #+#    #+#             */
/*   Updated: 2023/02/16 23:25:43 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default", 100, 100, 30)
{
    std::cout << "FragTrap default constructer called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructer with param called" << std::endl;
    this->Name = name;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Frag Trap destructer called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    *this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
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

void FragTrap::attack(const std::string &target)
{
    if (HitPoint == 0 || EnergyPoint == 0)
        std::cout << "FragTrap can't do anything he has no energy of hit point left" << std::endl;
    std::cout << "FragTrap " << Name << " attacks " << target << " , causing " << AttackDamage << " points of damage!" << std::endl;
    EnergyPoint--;
}

void FragTrap::highFivesGuys()
{
    std::cout << "High fives request" << std::endl;
}