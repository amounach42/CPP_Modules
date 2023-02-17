/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:47:20 by amounach          #+#    #+#             */
/*   Updated: 2023/02/16 19:54:58 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{

    FragTrap attacker("amounach");
    FragTrap victim("enemy");
    attacker.setAttackDamage(7);
    attacker.attack(victim.getName());
    victim.takeDamage(attacker.getAttackDamage());
    victim.highFivesGuys();

    attacker.setAttackDamage(7);
    attacker.attack(victim.getName());
    victim.takeDamage(attacker.getAttackDamage());

    attacker.setAttackDamage(1);
    attacker.attack(victim.getName());
    victim.takeDamage(attacker.getAttackDamage());
    victim.beRepaired(10);
    return (0);
}