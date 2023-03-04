/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 03:57:17 by amounach          #+#    #+#             */
/*   Updated: 2023/03/04 06:27:00 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

bool ScalarConverter::isChar(std::string str)
{
    int i = 0;
    while (str[i])
    {
        if (!isalpha(str[i]))
            return (false);
        i++;
    }
    return (true);
}

bool ScalarConverter::isInt(std::string str)
{
    int i = 0;
    if (str[i] == '+' || str[i] == '-')
            i++;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return (false);
        i++;
    }
    return (true);
}

bool ScalarConverter::isDouble(std::string str)
{
    int i = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (isdigit(str[i]))
        i++;
    if (str[i] == '.')
        i++;
    while (isdigit(str[i]))
        i++;
    return (true);
}
