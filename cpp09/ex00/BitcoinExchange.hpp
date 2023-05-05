/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:28:29 by amounach          #+#    #+#             */
/*   Updated: 2023/03/14 22:09:37 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_HPP
#define BTC_HPP

#include <iostream>

class BitcoinExchange{
    private:
        std::string content;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
};
#endif