/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:09:06 by amounach          #+#    #+#             */
/*   Updated: 2023/05/30 16:04:27 by amounach         ###   ########.fr       */
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

void checkFileOpen(const std::ifstream &file, const std::string &fileName)
{
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file: " << fileName << std::endl;
        exit(0);
    }
}

void BitcoinExchange::fillMap(std::string fileName)
{
    std::string line;
    std::ifstream file(fileName);
    std::string date;
    std::string price_str;
    float price;
    size_t comma_pos;

    checkFileOpen(file, fileName);
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
                return (false);
        }
        i++;
    }
    if (pipe == 0)
        return (false);
    return (true);
}

size_t getPos(std::string line)
{
    size_t pipe_pos;

    pipe_pos = line.find('|');
    return (pipe_pos);
}

bool isEmptyPrice(std::string line)
{
    size_t pipe_pos;

    pipe_pos = getPos(line);
    std::string price_str = trim(line.substr(pipe_pos + 1));
    if (price_str.empty())
        return false;
    return true;
}

bool isEmptyDate(std::string line)
{
    size_t pipe_pos;

    pipe_pos = getPos(line);
    std::string date = trim(line.substr(0, pipe_pos));
    if (date.empty())
        return false;
    return true;
}

std::string getDate(std::string line)
{
    std::string date_str;

    date_str = trim(line.substr(0, getPos(line)));
    return (date_str);
}

float getPrice(std::string line)
{
    size_t pipe_pos;
    float price;

    pipe_pos = getPos(line);
    std::string price_str = trim(line.substr(pipe_pos + 1));
    price = std::atof(price_str.c_str());
    return (price);
}

bool isValidFloat(std::string number)
{
    size_t find = number.find(".");
    size_t rfind = number.rfind(".");
    return (find == rfind);
}

bool check(std::string str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == '.')
            continue;
        if (str[i] < '0' || str[i] > '9')
            return (false);
    }
    return (true);
}

bool isValidPrice(std::string line)
{
    size_t pipe_pos;

    pipe_pos = line.find('|');
    std::string price_str = trim(line.substr(pipe_pos + 1));
    if (price_str.empty())
        return false;
    isValidFloat(price_str);
    float price = std::atof(price_str.c_str());
    if (!isValidFloat(price_str) || !check(price_str.c_str()))
    {
        std::cout << "Error: Invalid number near >> " << line << std::endl;
        return false;
    }
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

bool isDigitString(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

bool validDate(std::string date)
{
    std::string year;
    std::string month;
    std::string day;
    size_t i = 0;
    size_t pos;

    while ((pos = date.find("-")) != std::string::npos)
    {
        if (i == 0)
        {
            year = date.substr(0, pos);
            date.erase(0, pos + 1);
            i = 1;
        }
        else
        {
            month = date.substr(0, pos);
            date.erase(0, pos + 1);
        }
    }
    day = date;
    if (!isDigitString(year) || !isDigitString(month) || !isDigitString(day))
        return false;
    else if (year.length() != 4 || month.length() != 2 || day.length() != 2)
        return false;
    return true;
}

bool isValidDate(const std::string &date)
{
    int year, month, day;
    char delimiter1, delimiter2;
    std::istringstream obj(date);

    obj >> year >> delimiter1 >> month >> delimiter2 >> day;
    if (obj.fail() || delimiter1 != '-' || delimiter2 != '-')
    {
        for (size_t i = 0; i < date.length(); i++)
        {
            if (!isdigit(date[i]) && date[i] != '-')
                return false;
        }
        return false;
    }
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

void BitcoinExchange::checkKey(std::string date, float price)
{
    std::map<std::string, float>::iterator it = data.find(date);
    if (it == data.end())
    {
        it = data.lower_bound(date);
        if (it == data.begin())
        {
            std::cout << "Error: No data found" << std::endl;
            return;
        }
        it--;
    }
    std::cout << it->second * price << std::endl;
}

void BitcoinExchange::getFileContent(std::string fileName)
{
    std::string content;
    std::string line;

    std::ifstream file(fileName);
    checkFileOpen(file, fileName);
    std::getline(file, line);
    trim(line);

    if (line != "date | value")
        std::cout << "Error: Missing header line\n";
    while (std::getline(file, line))
    {
        if (!line.empty())
        {
            if (!isEmptyPrice(line))
                std::cout << "Error: Missing price => " << line << std::endl;
            if (!parser(line))
                std::cout << "Error: bad input => " << line << std::endl;
            else if (!isValidDate(getDate(line)))
                std::cout << "Error: bad input => " << line << std::endl;
            else if (!validDate(getDate(line)))
                std::cout << "Error: Invalid date" << std::endl;
            else if (isValidLine(line))
            {
                std::cout << trim(getDate(line)) << " => " << getPrice(line) << " = ";
                checkKey(getDate(line), getPrice(line));
            }
        }
    }
}

/*
A map container is a data structure that allows you to store key-value pairs, where each key is unique and maps to a corresponding value. In this case, you could use a map container to store the exchange rates for each date in the database file.

One advantage of using a map container is that it provides constant-time access to individual elements based on their keys. This means you can quickly look up the exchange rate for a specific date without having to iterate through the entire list of dates.

Another advantage is that maps provide a built-in way to sort elements by their keys. This can be useful if you need to iterate through the dates in chronological order, for example.

Overall, using a map container can simplify your code and make it more efficient, especially if you need to perform operations such as searching, sorting, and updating individual elements based on their keys.
*/
