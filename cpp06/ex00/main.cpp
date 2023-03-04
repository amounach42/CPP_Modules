/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:53:37 by amounach          #+#    #+#             */
/*   Updated: 2023/03/04 06:26:23 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
   (void)ac;
   if (ScalarConverter::isInt(av[1]))
       std::cout << "integer" << std::endl;
   else if (ScalarConverter::isChar(av[1]))
       std::cout << "char" << std::endl;
   else if (ScalarConverter::isDouble(av[1]))
       std::cout << "Double" << std::endl;
}