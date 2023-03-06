/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:53:37 by amounach          #+#    #+#             */
/*   Updated: 2023/03/06 21:19:33 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <vector>

int main()
{
    {
        int *a = new int();
        std::cout << *a << std::endl;
    }
    
    {
        Array<int> v(11);
        for (int i = 0; i < 11; i++)
            v[i] = i + 1;
        try
        {
            for (int i = 0; i < 10; i++)
                std::cout << v[i] << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        Array<std::string> arr(4);
        for (int i = 0; i < 4; i++)
        {
            if (i == 0)
                arr[i] = "string1";
            else if (i == 1)
                arr[i] = "string2";
            else if (i == 2)
                arr[i] = "string3";
            else if (i == 3)
                arr[i] = "string4";
            std::cout << arr[i] << "    ";
        }
        std::cout << "\n";
    }
    
    {
        const Array<int> arr(5);
        int i = 0;
        while (i < 5)
        {
            std::cout << arr[i++] << std::endl;
        }    
    }

    {
        std::cout << "Double array" << std::endl;
        Array<double> doubleArray(5);
        for (int i = 0; i < 5; i++)
        {
            doubleArray[i] = 2.5 + i;
        }
        for (int i = 0; i < 5; i++)
        {
            std::cout << doubleArray[i] << " ";
        }
        std::cout << std::endl;
    }
}

