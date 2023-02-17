/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:31:05 by amounach          #+#    #+#             */
/*   Updated: 2023/02/16 23:23:58 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#define RED "\033[1;31m"
#define RESET "\033[0m"
#define GREEN "\033[32m"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(std::string, int, int, int);
    FragTrap(const FragTrap &obj);
    FragTrap &operator=(const FragTrap &obj);
    void attack(const std::string &target);
    void highFivesGuys();
};
#endif