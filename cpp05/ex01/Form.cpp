/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 23:02:23 by amounach          #+#    #+#             */
/*   Updated: 2023/03/01 23:26:39 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::string Form::getName() const
{
    return (this->Name);
}

unsigned int Form::getGrade() const
{
    return (this->Grade);
}

Form::Form()
{
    std::cout << "Parametrized constructer" << std::endl;
}

Form::Form(std::string name, unsigned int grade) : Name(name), Grade(grade)
{
    std::cout << "Parametrized constructer" << std::endl;
}

Form::~Form()
{
    std::cout << "~Form" << std::endl;
}

Form::Form(const Form &obj) : Name(obj.Name), Grade(obj.Grade)
{
    *this = obj;
}

Form &Form::operator=(const Form &obj)
{
    std::cout << "copy assignment called!" << std::endl;
    return (*this);
}

const char *Form::GradeTooHighExeption::what() const throw()
{
    return "Exception: Grade is too high!";
}

const char *Form::GradeTooLowExeption::what() const throw()
{
    return "Exception: Grade is too low!";
}

void Form::beSigned(Bureaucrat &b)
{
    if (b.Grade < this->Grade)
    {
        this->beSigned = true;
    }
    else
        throw GradeTooLowException();
}