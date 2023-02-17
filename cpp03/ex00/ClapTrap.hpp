/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:36:35 by amounach          #+#    #+#             */
/*   Updated: 2023/02/17 01:12:04 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#define RED "\033[1;31m"
#define RESET "\033[0m"
#define GREEN "\033[32m"

class ClapTrap{
    private:
        std::string Name;
        unsigned int HitPoint;
        unsigned int EnergyPoint;
        unsigned int AttackDamage;

    public:
        /*Constructers*/
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap &obj);
        ClapTrap &operator=(const ClapTrap &obj);
        /*getters*/
        std::string getName();
        int getHitPoint();
        int getEnergyPoint();
        int getAttackDamage();
        /*Setters*/
        void    setName(std::string name);
        void    setHitPoint(int hitpoint);
        void    setEnergyPoint(int hitpoint);
        void    setAttackDamage(int hitpoint);
        /*Mebmber functions*/
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif