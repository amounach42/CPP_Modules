/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:52:27 by amounach          #+#    #+#             */
/*   Updated: 2023/02/17 23:58:42 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

std::string Cat::getType() const
{
    return (this->Type);
}

void Cat::setType(std::string type)
{
    this->Type = type;
}

Cat::Cat()
{
    std::cout << "Cat default constructer called" << std::endl;
    this->Type = "Cat";
}

Cat::~Cat()
{
    std::cout << "~Cat" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    *this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
    if (this != &obj)
        this->Type = obj.Type;
    return (*this);
}

Cat::Cat(std::string type)
{
    std::cout << "Cat constructer with param called" << std::endl;
    this->Type = type;
}

void Cat::makeSound()
{
    std::cout << "Cat make sound" << std::endl;
}