/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:09:06 by amounach          #+#    #+#             */
/*   Updated: 2023/05/06 19:46:25 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}
BitcoinExchange::~BitcoinExchange()
{
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
    *this = obj;
}
// BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchage &obj)
// {
//     return (*this);
// }

std::string BitcoinExchange::getFileContent(std::string fileName)
{
    std::string content;
    std::string tmp;
    bool is_last;
    
    std::ifstream file(fileName);
    if (!file.is_open())
    {
        std::cerr << "Error: unable to open file" << std::endl;
        exit(0);
    }
    std::getline(file, tmp);
    while (!file.eof())
    {
        std::getline(file, tmp);
        std::cout << tmp << std::endl;
        exit(0);
        is_last = file.eof();
        content = content + tmp + (is_last ? "" : "\n");
    }
    std::cout << content << std::endl;
    return (content);
}
