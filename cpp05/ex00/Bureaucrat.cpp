/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:38:23 by amounach          #+#    #+#             */
/*   Updated: 2023/02/25 20:31:02 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::string Bureaucrat::getName()
{
    return (this->Name);
}

unsigned int Bureaucrat::getGrade() const
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

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : Name(name)
{
    std::cout << "constructer with param" << std::endl;

    if (grade > 150)
        throw GradeTooLowExeption();
    else if (grade < 0)
        throw GradeTooHighExeption();
    else
        this->Grade = grade;
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

void Bureaucrat::incrementGrade()
{

    if (Grade <= 1)
        throw GradeTooHighExeption();
    else
        this->Grade--;
}

void Bureaucrat::decrementGrade()
{
    if (Grade >= 150)
        throw GradeTooLowExeption();
    else
        this->Grade++;
}

const char *Bureaucrat::GradeTooHighExeption::what() const throw()
{
    return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowExeption::what() const throw()
{
    return "Grade is too looow!";
}