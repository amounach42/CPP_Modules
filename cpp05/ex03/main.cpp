/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:53:37 by amounach          #+#    #+#             */
/*   Updated: 2023/03/03 23:47:33 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        Intern someRandomIntern;
        AForm *a;
        a = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
        delete a;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Intern someRandomIntern;
        AForm *a;
        a = someRandomIntern.makeForm("robotomy request", "Bender");
        delete a;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
