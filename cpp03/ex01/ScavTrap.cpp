/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:35:29 by amounach          #+#    #+#             */
/*   Updated: 2023/02/16 02:41:46 by amounach         ###   ########.fr       */
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

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) : ClapTrap()
{
    this->Name = obj.Name;
    this->HitPoint = obj.HitPoint;
    this->EnergyPoint = obj.EnergyPoint;
    this->attack = obj.AttackDamage;   
}