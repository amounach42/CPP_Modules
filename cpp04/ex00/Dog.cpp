/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:52:33 by amounach          #+#    #+#             */
/*   Updated: 2023/02/19 16:40:12 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

std::string Dog::getType() const
{
    return (this->Type);
}

void Dog::setType(std::string type)
{
    this->Type = type;
}

Dog::Dog()
{
    this->Type = "Dog";
    std::cout << "Dog default constructer called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "~Dog" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog copy constructer called" << std::endl;
    *this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    this->Type = obj.Type;
    return (*this);
}

Dog::Dog(std::string type)
{
    std::cout << "Dog constructer with param called" << std::endl;
    this->Type = type;
}

void Dog::makeSound() const
{
    std::cout << "naizame make sound!" << std::endl; 
}