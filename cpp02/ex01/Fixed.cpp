/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 01:10:47 by amounach          #+#    #+#             */
/*   Updated: 2023/02/14 01:23:10 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fixedValue)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedValue = fixedValue << fractionalBit; // To convert an integer to his fixed-point value we shift the number with 8
}

Fixed::Fixed(const float fixedValue)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedValue = roundf(fixedValue * (1 << fractionalBit)); 
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed &Fixed::operator = (const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedValue = fixed.fixedValue;
    return (*this);
}

int Fixed::toInt(void) const 
{`
    return (this->fixedValue >> fractionalBit);
}

float Fixed::toFloat(void) const
{
    return ((float)this->fixedValue / (1 << fractionalBit));
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return (out);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}