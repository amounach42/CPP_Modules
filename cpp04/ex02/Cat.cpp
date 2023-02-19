/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:52:27 by amounach          #+#    #+#             */
/*   Updated: 2023/02/19 22:37:41 by amounach         ###   ########.fr       */
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
    this->brain = new Brain();
}

Cat::~Cat()
{
    delete brain;
    std::cout << "~Cat" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    this->brain = new Brain();
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

void Cat::makeSound() const
{
    std::cout << "Cat make sound" << std::endl;
}