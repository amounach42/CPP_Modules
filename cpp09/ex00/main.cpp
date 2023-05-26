/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:27:52 by amounach          #+#    #+#             */
/*   Updated: 2023/05/26 11:42:06 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        BitcoinExchange btc;
        std::string database = "data.csv";
        btc.fillMap(database);
        std::string inputFile = av[1];
        btc.getFileContent(inputFile);
    }
    else
        std::cout << "usage: ./btc [filename]" << std::endl;
    return 0;
}
