/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:27:52 by amounach          #+#    #+#             */
/*   Updated: 2023/05/12 15:29:04 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main()
{
    BitcoinExchange btc;
    std::string database = "data.csv";
    btc.fillMap(database);
    std::string inputFile = "input.txt";
    btc.getFileContent(inputFile);
    return 0;
}
