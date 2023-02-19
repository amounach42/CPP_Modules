/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:25:42 by amounach          #+#    #+#             */
/*   Updated: 2023/02/19 19:50:24 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal{
    protected:
        std::string Type;
    public:
        std::string getType() const;
        void setType(std::string);
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &obj);
        WrongAnimal &operator = (const WrongAnimal &obj);
        void makeSound() const;
};
#endif