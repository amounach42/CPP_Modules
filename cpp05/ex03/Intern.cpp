/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:37:59 by amounach          #+#    #+#             */
/*   Updated: 2023/03/03 23:45:21 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &obj)
{
    (void)obj;
}

Intern &Intern::operator=(const Intern &obj)
{
    (void)obj;
    return *this;
}

const char *Intern::ErrorIntern::what() const throw()
{
    return ("Error : cannot create Intern");
}

AForm *Intern::makeForm(std::string Form, std::string target)
{
    std::string AForm[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    for (int i = 0; i < 3; i++)
    {
        if (Form == AForm[i])
        {
            switch (i)
            {
            case 0:
                std::cout << "Intern creates " << Form << std::endl;
                return new PresidentialPardonForm(target);
            case 1:
                std::cout << "Intern creates " << Form << std::endl;
                return new RobotomyRequestForm(target);
            case 2:
                std::cout << "Intern creates " << Form << std::endl;
                return new ShrubberyCreationForm(target);
            }
        }
    }
    throw(ErrorIntern());
    return NULL;
}
