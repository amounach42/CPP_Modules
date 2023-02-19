/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:52:35 by amounach          #+#    #+#             */
/*   Updated: 2023/02/19 20:55:48 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* brain;
    public:
        std::string getType() const;
        void setType(std::string);
        Dog();
        ~Dog();
        Dog(const Dog &obj);
        Dog &operator = (const Dog &obj);
        Dog(std::string type);
        void makeSound() const;
};
#endif