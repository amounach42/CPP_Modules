/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:09:06 by amounach          #+#    #+#             */
/*   Updated: 2023/05/07 12:43:46 by amounach         ###   ########.fr       */
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
        parser(tmp);
        is_last = file.eof();
        content = content + tmp + (is_last ? "" : "\n");
    }
    std::cout << content << std::endl;
    return (content);
}

void BitcoinExchange::fillMap(std::string fileName)
{
    std::string line;
    std::ifstream file(fileName);
    std::string date;
    std::string price_str;
    double price;
    size_t comma_pos;

    if (!file.is_open())
    {
        std::cerr << "Error: unable to open file" << std::endl;
        exit(0);
    }
    std::getline(file, line);
    while (!file.eof())
    {
        std::getline(file, line);
        comma_pos = line.find(',');
        date = line.substr(0, comma_pos);
        price_str = line.substr(comma_pos + 1);
        price = std::stod(price_str);
        data[date] = price;
    }
    file.close();
    
    for (std::map<std::string, double>::iterator it = data.begin(); it != data.end(); ++it)
    {
        std::cout << it->first << ": " << it->second << "\n";
    }
}

void BitcoinExchange::parser(std::string line)
{
    int i = 0;
    int pipe = 0;

    while (line[i])
    {
        if (line[i] == '|')
        {
            pipe++;
            if (pipe > 1)
            {
                std::cout << "Error: input string contain more than one pipe" << std::endl;
                exit(0);
            }
        }
        i++;
    }
    if (pipe == 0)
    {
        std::cout << "Error: input string does not contain pipe" << std::endl;
        exit(0);
    }
}