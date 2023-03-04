/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 03:57:17 by amounach          #+#    #+#             */
/*   Updated: 2023/03/05 00:27:52 by amounach         ###   ########.fr       */
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
    if (str.length() == 1 && !isdigit(str.c_str()[0]))
        return true;
    return false;
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

void ScalarConverter::Infinie(std::string av)
{
    std::string array[6] = {"nan", "-inf", "+inf", "nanf", "-inff", "+inff"};
    for (int i = 0; i < 6; i++)
    {
        if (av == array[i])
        {
            switch (i)
            {
            case 0:
                PrintMessage("impossible", "impossible", "nanf", "nan");
                exit(0);
            case 1:
                PrintMessage("impossible", "impossible", "-inff", "-inf");
                exit(0);
            case 2:
                PrintMessage("impossible", "impossible", "+inff", "+inf");
                exit(0);
            case 3:
                PrintMessage("impossible", "impossible", "nanf", "nan");
                exit(0);
            case 4:
                PrintMessage("impossible", "impossible", "-inff", "-inf");
                exit(0);
            case 5:
                PrintMessage("impossible", "impossible", "+inff", "+inf");
                exit(0);
            }
        }
    }
}

void ScalarConverter::PrintMessage(std::string Char, std::string Int, std::string Float, std::string Double)
{
    std::cout << "char: " << Char << std::endl;
    std::cout << "int: " << Int << std::endl;
    std::cout << "float: " << Float << std::endl;
    std::cout << "double: " << Double << std::endl;
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
    std::cout << "float: "<< floatV << "f" << std::endl;
}

void ScalarConverter::displayDouble()
{
    std::cout << "double: " << doubleV << std::endl;
}

void ScalarConverter::display()
{
    displayChar();
    displayInt();
    displayFloat();
    displayDouble();
}
