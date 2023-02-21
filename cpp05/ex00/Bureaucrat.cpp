/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:38:23 by amounach          #+#    #+#             */
/*   Updated: 2023/02/22 00:10:34 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::string Bureaucrat::getName()
{
    return (this->Name);
}

Bureaucrat::Bureaucrat(const std::string name) : Name(name)
{
}

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "~Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : Name(obj.Name)
{
    *this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    this->Grade = obj.Grade;
    return (*this);
}
