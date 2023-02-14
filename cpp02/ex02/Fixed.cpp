/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 01:10:41 by amounach          #+#    #+#             */
/*   Updated: 2023/02/14 20:17:17 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedValue = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	this->fixedValue = obj.fixedValue;
	return (*this);
}

Fixed::Fixed(const int value)
{
	this->fixedValue = value << this->fractionalBit;
}

Fixed::Fixed(const float value)
{
	this->fixedValue = roundf(value * (1 << this->fractionalBit));
}

int Fixed::toInt(void) const
{
	return (this->fixedValue >> this->fractionalBit);
}

float Fixed::toFloat(void) const
{
	return ((float)this->fixedValue / (1 << this->fractionalBit));
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

bool Fixed::operator==(const Fixed &obj)
{
	return (this->fixedValue == obj.fixedValue);
}

bool Fixed::operator!=(const Fixed &obj)
{
	return (this->fixedValue != obj.fixedValue);
}

bool Fixed::operator>(const Fixed &obj)
{
	return (this->fixedValue > obj.fixedValue);
}

bool Fixed::operator<(const Fixed &obj)
{
	return (this->fixedValue < obj.fixedValue);
}

bool Fixed::operator>=(const Fixed &obj)
{
	return (this->fixedValue >= obj.fixedValue);
}

bool Fixed::operator<=(const Fixed &obj)
{
	return (this->fixedValue <= obj.fixedValue);
}

Fixed Fixed::operator+(const Fixed &obj)
{
	return (Fixed(this->toFloat() + obj.toFloat()));
}

Fixed Fixed::operator-(const Fixed &obj)
{
	return (Fixed(this->toFloat() - obj.toFloat()));
}

Fixed Fixed::operator*(const Fixed &obj)
{
	return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator/(const Fixed &obj)
{
	return (Fixed(this->toFloat() / obj.toFloat()));
}

Fixed Fixed::operator++()
{
	++this->fixedValue;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;
	tmp.fixedValue = this->fixedValue;
	this->fixedValue++;
	return (tmp);
}

Fixed Fixed::operator--() // pre-decrement
{
	--this->fixedValue;
	return (*this);
}

Fixed Fixed::operator--(int) // post-decrement
{
	Fixed tmp;
	tmp = this->fixedValue;
	this->fixedValue--;
	return (*this);
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.fixedValue < fixed2.fixedValue)
		return (fixed1);
	return (fixed2);
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.fixedValue > fixed2.fixedValue)
		return (fixed1);
	return (fixed2);
}