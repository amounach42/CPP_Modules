/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:53:37 by amounach          #+#    #+#             */
/*   Updated: 2023/03/06 16:44:59 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <vector>


int main()
{
    // int *a = new int();
    // std::cout << *a << std::endl;
    const Array<int> v(10) ;
    std::cout << v[4] << std::endl;
    // const Array<int> v(10) ;

    // for (size_t i = 0; i < 10; i++)
    //     v[i] = i + 1;


    try
    {
        //  v[1] = 2;
        std::cout << v[4] << std::endl;
   }
   catch(const std::exception& e)
   {
    std::cerr << e.what() << '\n';
   }
   
}
