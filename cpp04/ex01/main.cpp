/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:43:49 by amounach          #+#    #+#             */
/*   Updated: 2023/02/19 23:26:55 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    int i = 0;
    int n = 10;
    int half = n / 2;
    Animal *arr[n];

    while (i < half)
    {
        arr[i] = new Dog();
        std::cout << "---------------------------------------" << std::endl;
        i++;
    }
    while (half < n)
    {
        arr[half] = new Cat();
        std::cout << "----------------------------------------" << std::endl;
        half++;
    }
    for (int j = 0; j < n; j++)
    {
        delete arr[j];
    }
    return (0);
}