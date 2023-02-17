/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:35:10 by amounach          #+#    #+#             */
/*   Updated: 2023/02/17 01:44:40 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap att("ayoub");
   ClapTrap deff("enemy");
    
    att.setAttackDamage(9);
    std::cout << "\033[1;31mEnergy Points before attacking: \033[0m" << att.getEnergyPoint() << std::endl;
    att.attack(deff.getName());
    std::cout << "\033[1;31mEnergy Points after attacking: \033[0m" << att.getEnergyPoint() << std::endl;
    deff.takeDamage(att.getAttackDamage());
    deff.setAttackDamage(5);
    deff.attack(att.getName());
    att.takeDamage(deff.getAttackDamage());
    att.beRepaired(7);
    deff.beRepaired(7);
    att.guardGate();
}