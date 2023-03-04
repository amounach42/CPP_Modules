/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:53:37 by amounach          #+#    #+#             */
/*   Updated: 2023/03/05 00:23:07 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    std::cout << std::fixed;
    std::cout.precision(1);
    if (ac != 2)
        std::cout << "Please enter one param" << std::endl;
    else
    {
        ScalarConverter::Infinie(av[1]);
        if (ScalarConverter::isChar(av[1]))
        {
            ScalarConverter::setCharacter(av[1][0]);
            ScalarConverter::convertChar(ScalarConverter::getCharacter());
            ScalarConverter::display();
        }
        else if (ScalarConverter::isInt(av[1]))
        {
            try
            {
                ScalarConverter::setInteger(std::stoi(av[1]));
                ScalarConverter::convertInt(ScalarConverter::getInteger());
                ScalarConverter::display();
            }
            catch (const std::exception &e)
            {
                std::cerr << e.what() << std::endl;
            }
        }
        else if (ScalarConverter::isDouble(av[1]))
        {
            try
            {
                ScalarConverter::setDouble(std::stod(av[1]));
                ScalarConverter::convertDouble(ScalarConverter::getDouble());
                ScalarConverter::display();
            }
            catch (const std::exception &e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        else if (ScalarConverter::isFloat(av[1]))
        {
            try
            {
                ScalarConverter::setFloat(std::stof(av[1]));
                ScalarConverter::convertFloat(ScalarConverter::getFloat());
                ScalarConverter::display();
            }
            catch (const std::exception &e)
            {
                std::cerr << e.what() << '\n';
            }
        }
    }
}