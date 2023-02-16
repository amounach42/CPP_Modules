/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:35:10 by amounach          #+#    #+#             */
/*   Updated: 2023/02/16 02:06:38 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include "ClapTrap.hpp"
#include "ScarvTrap.hpp"

int main()
{
    ScarvTrap scav("Scav");
    
    ClapTrap victim("enemy");
    ClapTrap attacker("amounach");
    attacker.setAttackDamage(7);
    attacker.attack(victim.getName());
    victim.takeDamage(attacker.getAttackDamage());

    attacker.setAttackDamage(7);
    attacker.attack(victim.getName());
    victim.takeDamage(attacker.getAttackDamage());

    attacker.setAttackDamage(1);
    attacker.attack(victim.getName());
    victim.takeDamage(attacker.getAttackDamage());
    victim.beRepaired(10);
    return (0);
}