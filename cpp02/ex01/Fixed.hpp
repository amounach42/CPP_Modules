/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 01:10:49 by amounach          #+#    #+#             */
/*   Updated: 2023/02/14 01:10:50 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixedValue;
    static const int fractionalBit = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &obj);
    Fixed &operator=(const Fixed &fixed);
    Fixed(const int);
    Fixed(const float);
    int toInt(void) const;
    float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &, const Fixed &);

// 2.30                    *     10^2 =230
/*----------------------------------------*/
// 1001001100.110011001101 *     2 ^ 7 = 588
/*-----------------------------------------*/


/*floating point */
/*[   0    ]|[1][0][0][0][0][0][0][0]|[0][0][1][0][][][][][][][][][][][][][][][][][][][][][][]*/
/*``````````|       power            |                                             |``*/
/*sign bit*/
// 2.30 = 10.01001100110011001101 //
// sientific notation = 1.001001100110011001101 * 2^1
// 127 + 1 = 128 = 10000000

/*
5.50 = 101.1
sientific notation : 1.011 * 2^2
127 + 2 = 100000001


sign
[ 0 ] [1][0][0][0][0][0][0][1] [0110000000000000000000000000]

*/