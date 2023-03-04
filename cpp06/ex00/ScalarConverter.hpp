/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 01:46:02 by amounach          #+#    #+#             */
/*   Updated: 2023/03/04 09:42:48 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <exception>

class ScalarConverter
{
    private:
        static int integer;
        static char character;
        static float floatV;
        static double doubleV;
    public:
        static bool isChar(std::string);
        static bool isInt(std::string);
        static bool isFloat(std::string);
        static bool isDouble(std::string);
        static void convertInt(int i);
        static void convertChar(char c);
        static void convertFloat(float f);
        static void convertDouble(double d);
        static void display();
        static void displayChar();
        static void displayInt();
        static void displayFloat();
        static void displayDouble();
        //setters
        static void setInteger(int);
        static void setCharacter(char);
        static void setFloat(float);
        static void setDouble(double);
        //getters
        static int getInteger();
        static char getCharacter();
        static float getFloat();
        static double getDouble();
};
#endif
