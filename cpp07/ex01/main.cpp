/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:53:37 by amounach          #+#    #+#             */
/*   Updated: 2023/03/06 21:16:32 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void print(T t)
{
    std::cout << t << " ";
}

template <typename T>
void upperCase(T c)
{
    std::cout << static_cast<char>(toupper(c)) << "  " << toupper(c) << std::endl;
}

int main()
{
    {
        int arr1[] = {1, 2, 3, 4, 5};
        iter(arr1, 5, print);
        std::cout << std::endl;
        double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
        iter(arr2, 5, print);
        std::cout << std::endl;
        std::string arr3[] = {"foo", "bar", "baz"};
        iter(arr3, 3, print);
        std::cout << "\n";
    }
    {
        char arr[] = {'a', 'b', 'c', 'd'};
        iter(arr, 4, upperCase);
    }
}
