/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:28:44 by amounach          #+#    #+#             */
/*   Updated: 2023/02/19 20:15:51 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

std::string WrongCat::getType() const
{
    return (this->Type);
}

void WrongCat::setType(std::string type)
{
    this->Type = type;
}

WrongCat::WrongCat()
{
    this->Type = "Default type Wrong cat";
    std::cout << "Wrong Cat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    *this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    this->Type = obj.Type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong cat make sound" << std::endl;
}