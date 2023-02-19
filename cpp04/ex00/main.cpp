/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:52:38 by amounach          #+#    #+#             */
/*   Updated: 2023/02/19 20:13:25 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp" 
#include "WrongAnimal.hpp" 
#include "WrongCat.hpp" 
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // const Animal *meta = new Animal();
    // const Animal *j = new Dog();
    // const Animal *i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); // will output the cat sound! 
    // j->makeSound();
    // meta->makeSound();
    // delete meta;
    // delete i;
    // delete j;
    const WrongAnimal *meta = new WrongAnimal();
    const WrongAnimal *i = new WrongCat();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound! 
    meta->makeSound();
    delete meta;
    delete i;
    return (0);
}