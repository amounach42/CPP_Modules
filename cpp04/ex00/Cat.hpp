/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:52:30 by amounach          #+#    #+#             */
/*   Updated: 2023/02/17 23:58:03 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
    public:
        std::string getType() const;
        void setType(std::string);
        Cat();
        ~Cat();
        Cat(const Cat &obj);
        Cat &operator = (const Cat &obj);
        Cat(std::string type);
        void makeSound();
};

#endif