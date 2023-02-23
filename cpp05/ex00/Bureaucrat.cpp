/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:38:23 by amounach          #+#    #+#             */
/*   Updated: 2023/02/23 23:45:22 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::string Bureaucrat::getName()
{
    return (this->Name);
}

std::string Bureaucrat::getGrade()
{
    return Grade;
}

void Bureaucrat::setGrade(unsigned int grade)
{
    if (grade > 150)
        throw GradeTooHighExeption();
    else if (grade < 0)
        throw GradeTooLowExeption();
    else
        this->Grade = grade;
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

void Bureaucrat::increment(unsigned int grade)
{
    try
    {
        grade++;
        if (grade > 150)
            throw GradeTooHighExeption();
    }
    catch (std::exception &e)
    {
        e.what();
    }
}

void Bureaucrat::decrement(unsigned int grade)
{
    grade--;
}