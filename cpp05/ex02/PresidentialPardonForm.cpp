/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:25:06 by amounach          #+#    #+#             */
/*   Updated: 2023/03/03 23:34:08 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "~PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
    *this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    this->Target = obj.Target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSigned())
    {
        if (executor.getGrade() <= this->getExecuteGrade())
            std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
        else
            throw GradeTooLowException();
    }
    else
        throw GradeTooLowException();
}