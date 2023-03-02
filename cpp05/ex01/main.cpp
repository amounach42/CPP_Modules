/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:53:37 by amounach          #+#    #+#             */
/*   Updated: 2023/03/02 01:38:34 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    try
    {
        /* code */
        Bureaucrat a("Bureaucrat1", 149);
        std::cout << "Name: " << a.getName() << "\n";
        std::cout << "Grade: " << a.getGrade() << "\n";
        a.decrementGrade();
        a.decrementGrade();
        std::cout << "Grade: " << a.getGrade() << "\n";
        std::cout << a;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-----------------------------------" << std::endl;

    try
    {
        Bureaucrat a("amounach", 5);
        std::cout << a;
        std::cout << "Name: " << a.getName() << "\n";
        std::cout << "Grade before increment: " << a.getGrade() << "\n";
        a.incrementGrade();
        std::cout << "Grade after increment: " << a.getGrade() << "\n";
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-----------------------------------" << std::endl;

    try
    {
        Bureaucrat a("ayoub", 0);
        std::cout << a;
        std::cout << "Name: " << a.getName() << "\n";
        std::cout << "Grade before increment: " << a.getGrade() << "\n";
        a.incrementGrade();
        std::cout << "Grade after increment: " << a.getGrade() << "\n";
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "-----------------------------------" << std::endl;
    try
    {
        Bureaucrat a("amounach", 10);
        Form f();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}