/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:06:39 by amounach          #+#    #+#             */
/*   Updated: 2023/02/19 19:53:23 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        std::string getType() const;
        void setType(std::string);
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &obj);
        WrongCat &operator=(const WrongCat &obj);
        void makeSound() const;
};
#endif