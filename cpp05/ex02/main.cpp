/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:53:37 by amounach          #+#    #+#             */
/*   Updated: 2023/03/03 23:34:30 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main()
{
    try
    {
        srand(time(0));
        {
            AForm *forms[3];

            forms[0] = new ShrubberyCreationForm("home");
            std::cout << "----------------------------------" << std::endl;
            forms[1] = new RobotomyRequestForm("war9a");
            std::cout << "----------------------------------" << std::endl;
            forms[2] = new PresidentialPardonForm("attestation");
            std::cout << "----------------------------------" << std::endl;
            Bureaucrat ayoub("ayoub", 4);
            ayoub.signForm(*forms[0]);
            ayoub.signForm(*forms[1]);
            ayoub.signForm(*forms[2]);

            std::cout << "----------------------------------" << std::endl;
            ayoub.executeForm(*forms[0]);
            ayoub.executeForm(*forms[1]);
            ayoub.executeForm(*forms[2]);
            std::cout << "----------------------------------" << std::endl;
            for (int i = 0; i < 3; i++)
                delete forms[i];
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}