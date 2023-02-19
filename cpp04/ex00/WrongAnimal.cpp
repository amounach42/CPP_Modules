/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:02:06 by amounach          #+#    #+#             */
/*   Updated: 2023/02/19 20:16:08 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() const
{
    return (this->Type);    
}

void WrongAnimal::setType(std::string type)
{
    this->Type = type;
}

WrongAnimal::WrongAnimal()
{
    this->Type = "Default Wrong animal";
    std::cout << "Wrong Animal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "~Wrong Animal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    *this = obj;
}

WrongAnimal &WrongAnimal::operator=(const  WrongAnimal &obj)
{
    this->Type = obj.Type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal make sound" <<  std::endl;
}