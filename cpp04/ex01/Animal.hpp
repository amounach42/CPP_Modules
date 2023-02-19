/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:49:23 by amounach          #+#    #+#             */
/*   Updated: 2023/02/19 19:10:13 by amounach         ###   ########.fr       */
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
        virtual ~Animal();
        Animal(const Animal &obj);
        Animal &operator = (const Animal &obj);
        Animal(std::string type);
        std::string getType() const ;
        void setType(std::string);
        virtual void makeSound() const;
};

#endif