/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:46:46 by amounach          #+#    #+#             */
/*   Updated: 2023/03/03 20:54:14 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

std::string AForm::getName() const
{
    return this->Name;
}

unsigned int AForm::getGrade() const
{
    return this->Grade;
}

unsigned int AForm::getExecuteGrade() const
{
    return this->executeGrade;
}

bool AForm::getIsSigned() const
{
    return (this->isSigned);
}

AForm::AForm() : Name("default"), Grade(150), executeGrade(150)
{
    std::cout << "default constructor called" << std::endl;
}

AForm::AForm(std::string name, unsigned int grade, unsigned int executeGrade) : Name(name), Grade(grade), executeGrade(executeGrade)
{
    std::cout << "parameterized constructor called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "~AForm" << std::endl;
}

AForm::AForm(const AForm &obj) : Name(obj.Name), Grade(obj.Grade), executeGrade(obj.executeGrade)
{
    *this = obj;
}

AForm &AForm::operator=(const AForm &obj)
{
    (void) obj;
    std::cout << "copy assignment called!" << std::endl;
    return (*this);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

void AForm::beSigned(Bureaucrat &b) 
{
    if (b.getGrade() <= this->Grade)
    {
        this->isSigned = true;
    }
    else
    {
        throw GradeTooLowException();
    }
}
