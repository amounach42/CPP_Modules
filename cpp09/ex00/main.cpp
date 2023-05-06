/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:27:52 by amounach          #+#    #+#             */
/*   Updated: 2023/05/06 19:30:08 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main()
{
    BitcoinExchange btc;
    std::string fileName = "data.csv";
    std::string content = btc.getFileContent(fileName);
    std::cout << content << std::endl;

    return 0;
}
