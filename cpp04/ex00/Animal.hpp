/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:49:23 by amounach          #+#    #+#             */
/*   Updated: 2023/02/17 23:50:52 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string Type;
    public:
        Animal();
        ~Animal();
        Animal(const Animal &obj);
        Animal &operator = (const Animal &obj);
        Animal(std::string type);
        std::string getType();
        void setType(std::string);

};

#endif