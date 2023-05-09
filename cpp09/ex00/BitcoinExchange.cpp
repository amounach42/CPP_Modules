/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:09:06 by amounach          #+#    #+#             */
/*   Updated: 2023/05/09 11:54:33 by amounach         ###   ########.fr       */
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

void BitcoinExchange::fillMap(std::string fileName)
{
    std::string line;
    std::ifstream file(fileName);
    std::string date;
    std::string price_str;
    float price;
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
        price = std::atof(price_str.c_str());
        data[date] = price;
    }
    file.close();
    for (std::map<std::string, float>::iterator it = data.begin(); it != data.end(); ++it)
    {
        std::cout << it->first << ": " << it->second << "\n";
    }
}

std::string ltrim(const std::string &s)
{
    size_t start = s.find_first_not_of(" \t");
    return (start == std::string::npos) ? "" : s.substr(start);
}

std::string rtrim(const std::string &s)
{
    size_t end = s.find_last_not_of(" \t");
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

std::string trim(const std::string &s)
{
    return rtrim(ltrim(s));
}

bool parser(std::string line)
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
                return (false);
            }
        }
        i++;
    }
    if (pipe == 0)
    {
        std::cout << "Error: bad input =>" << std::endl;
        return (false);
    }
    return (true);
}

size_t getPos(std::string line)
{
    size_t pipe_pos;

    pipe_pos = line.find('|');
    return (pipe_pos);
}

std::string getDate(std::string line)
{
    std::string date_str;

    date_str = line.substr(0, getPos(line));
    return (date_str);
}

float getPrice(std::string line)
{
    size_t pipe_pos;
    float price;

    pipe_pos = getPos(line);
    std::string price_str = line.substr(pipe_pos + 1);
    price = std::atof(price_str.c_str());
    return (price);
}

bool isValidFloat(std::string number)
{
    size_t find = number.find(".");
    size_t rfind = number.rfind(".");
    if (rfind == number.length() - 1)
        return false;
    return (find == rfind);
}

bool isValidPrice(std::string line)
{
    size_t pipe_pos;

    pipe_pos = line.find('|');
    std::string price_str = line.substr(pipe_pos + 1);
    if (price_str.empty())
        return false;
    isValidFloat(price_str);
    float price = std::atof(price_str.c_str());
    if (!isValidFloat(line))
        std::cout << "Error Invalid number >> " << line << std::endl;
    if (price < 0)
    {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }
    else if (price > 1000)
    {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

bool isValidDate(const std::string &date)
{
    int year, month, day;
    char delimiter1, delimiter2;
    std::istringstream ss(date);

    ss >> year >> delimiter1 >> month >> delimiter2 >> day;
    if (ss.fail() || delimiter1 != '-' || delimiter2 != '-')
        return false;
    if (year < 2009)
        return false;
    if (month < 1 || month > 12)
        return false;
    int days_in_month;
    switch (month)
    {
    case 2:
        days_in_month = (year % 4 == 0) ? 29 : 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days_in_month = 30;
        break;
    default:
        days_in_month = 31;
        break;
    }
    if (day < 1 || day > days_in_month)
        return false;
    return true;
}

bool isValidLine(std::string line)
{
    size_t pipe_pos = line.find('|');
    std::string date_str = trim(line.substr(0, pipe_pos));
    std::string price_str = trim(line.substr(pipe_pos + 1));
    for (size_t i = 0; i < date_str.length(); i++)
    {
        if (!isdigit(date_str[i]) && date_str[i] != '-')
        {
            std::cout << "Error: The date value contains invalid characters." << std::endl;
            return false;
        }
    }
    for (size_t i = 0; i < price_str.length(); i++)
    {
        if (!isdigit(price_str[i]) && price_str[i] != '-' && price_str[i] != '.')
        {
            std::cout << "Error: The price value contains invalid characters." << std::endl;
            return false;
        }
    }
    return (isValidDate(date_str) && isValidPrice(price_str));
}

std::string BitcoinExchange::getFileContent(std::string fileName)
{
    std::string content;
    std::string line;
    bool is_last;

    std::ifstream file(fileName);
    if (!file.is_open())
    {
        std::cerr << "Error: unable to open file" << std::endl;
        exit(0);
    }
    std::getline(file, line);
    while (std::getline(file, line))
    {
        if (!line.empty())
        {
            if (isValidLine(line))
            {
                std::cout << trim(line) << " =>" << std::endl;
                is_last = file.eof();
                content = content + line + (is_last ? "" : "\n");
            }
            if (!isValidDate(getDate(line)))
                std::cout << "Error: bad input => " << line << std::endl;
        }
    }
    return (content);
}
