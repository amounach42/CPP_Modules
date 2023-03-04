/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 03:57:17 by amounach          #+#    #+#             */
/*   Updated: 2023/03/04 09:54:05 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int ScalarConverter::integer = 0; 
char ScalarConverter::character = '\0';
double ScalarConverter::doubleV = 0.0;
float ScalarConverter::floatV = 0.0f;

void ScalarConverter::setCharacter(char a)
{
    character = a;
}

void ScalarConverter::setInteger(int a)
{
    integer = a;
}

void ScalarConverter::setFloat(float a)
{
    floatV = a;
}

void ScalarConverter::setDouble(double a)
{
    doubleV = a;
}

char ScalarConverter::getCharacter()
{
    return (character);
}

int ScalarConverter::getInteger()
{
    return (integer);
}

float ScalarConverter::getFloat()
{
    return (floatV);
}

double ScalarConverter::getDouble()
{
    return (doubleV);
}

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
    if (str[i] != '\0')
        return false;
    return (true);
}

bool ScalarConverter::isFloat(std::string str)
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
    if (str[i] != 'f')
       return false;
    return (true);
}

void ScalarConverter::convertInt(int i)
{
    character = static_cast<char>(i);
    floatV = static_cast<float>(i);
    doubleV = static_cast<double>(i);
}

void ScalarConverter::convertChar(char c)
{
    integer = static_cast<int>(c);
    floatV = static_cast<float>(c);
    doubleV = static_cast<double>(c);
}

void ScalarConverter::convertFloat(float f)
{
    integer = static_cast<int>(f);
    character = static_cast<char>(f);
    doubleV = static_cast<double>(f);
}

void ScalarConverter::convertDouble(double d)
{
    integer = static_cast<int>(d);
    floatV = static_cast<float>(d);
    character = static_cast<char>(d);
}

void ScalarConverter::displayChar()
{
    if (character >= 0 && character < 32)
       std::cout << "char: Non displayable" << std::endl;
    else if (character >= 32 && character < 127)
       std::cout << "char: " <<  character << std::endl;
    else
       std::cout << "char: impossible" << std::endl;
}

void ScalarConverter::displayInt()
{
    std::cout << "int: " << integer << std::endl;
}

void ScalarConverter::displayFloat()
{
    float tmp = floatV;
    if (tmp - floatV == 0)
        std::cout << "float: "<< floatV << ".0f" << std::endl;
    else
        std::cout << "float: "<< floatV << ".f" << std::endl;
}

void ScalarConverter::displayDouble()
{
    float tmp = doubleV;
    if (tmp - doubleV == 0)
        std::cout << "double: " << doubleV << ".0" << std::endl;
    else
        std::cout << "double: " << doubleV << std::endl;
}

void ScalarConverter::display()
{
    displayChar();
    displayInt();
    displayFloat();
    displayDouble();
}