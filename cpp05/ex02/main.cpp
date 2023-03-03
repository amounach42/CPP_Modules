/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:53:37 by amounach          #+#    #+#             */
/*   Updated: 2023/03/03 21:06:47 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main()
{
    try
    {
        std::cout << "---------------first test with low grade -------------------" << std::endl
                  << std::endl;
        {
             AForm *form;

            form = new ShrubberyCreationForm("home");
            std::cout << "----------------------------------" << std::endl;
            // forms[1] = new RobotomyRequestForm("war9a");
            // std::cout << "----------------------------------" << std::endl;
            // forms[2] = new PresidentialPardonForm("attestation");
            // std::cout << "----------------------------------" << std::endl;
            Bureaucrat ayoub("ayoub", 15);
            ayoub.signForm(form[0]);
            // ayoub.signForm(*forms[1]);
            // ayoub.signForm(*forms[2]);

            std::cout << "----------------------------------" << std::endl;
            ayoub.executeForm(form[0]);
            // ayoub.execute(*forms[1]);
            // ayoub.execute(*forms[2]);
            std::cout << "----------------------------------" << std::endl;
        
            delete form;
        }
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}