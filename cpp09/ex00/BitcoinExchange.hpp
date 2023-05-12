/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:28:29 by amounach          #+#    #+#             */
/*   Updated: 2023/05/12 16:05:59 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_HPP
#define BTC_HPP

#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <ctime>
#include <limits>
#include <sstream>

class BitcoinExchange
{
private:
    std::string content;
    std::map<std::string, float> data;

public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &obj);
    // BitcoinExchange &operator=(const BitcoinExchange &obj);
    std::string getFileContent(std::string fileName);
    void fillMap(std::string fileName);
    // bool parser(std::string line);
    void checkKey(std::string date, float price);
};
#endif