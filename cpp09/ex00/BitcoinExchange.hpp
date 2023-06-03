/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:28:29 by amounach          #+#    #+#             */
/*   Updated: 2023/05/31 21:58:11 by amounach         ###   ########.fr       */
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
    BitcoinExchange &operator=(const BitcoinExchange &obj);
    void getFileContent(std::string fileName);
    void fillMap(std::string fileName);
    void checkKey(std::string date, float price);
};
#endif