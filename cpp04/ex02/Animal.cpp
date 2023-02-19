/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:52:22 by amounach          #+#    #+#             */
/*   Updated: 2023/02/19 16:41:27 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType() const 
{
    return (this->Type);
}

void Animal::setType(std::string type)
{
    this->Type = type;
}

Animal::Animal()
{
    std::cout << "Animal" << std::endl;
}

Animal::~Animal()
{
    std::cout << "~Animal" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    *this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << "Animal Copy assingement operator" << std::endl;
    this->Type = obj.Type;
    return (*this);
}

Animal::Animal(std::string type)
{
    this->Type = type;
}

void Animal::makeSound() const 
{
    std::cout << "Default sound!" << std::endl;
}