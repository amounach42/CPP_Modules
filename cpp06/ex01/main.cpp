/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:53:37 by amounach          #+#    #+#             */
/*   Updated: 2023/03/05 05:00:43 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
    Data var;
    Data var2;
    Seralizer s;
    
    var.number = 5;
    var2.number = 15;
    std::cout << &var << std::endl;
    std::cout << s.serialize(&var) << std::endl;
    std::cout << s.deserialize(s.serialize(&var)) << std::endl;
    &var == s.deserialize(s.serialize(&var)) ? std::cout << " equal\n" : std::cout << "diffrent\n";
    &var2 == s.deserialize(s.serialize(&var)) ? std::cout << " equal" : std::cout << "diffrent";
}