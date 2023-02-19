/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:38:19 by amounach          #+#    #+#             */
/*   Updated: 2023/02/19 20:42:20 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructer" << std::endl;
}

Brain::~Brain()
{
    std::cout << "~Brain destructer called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    *this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = obj.ideas[i];
        i++;
    }
    return (*this);
}