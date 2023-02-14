/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 01:10:38 by amounach          #+#    #+#             */
/*   Updated: 2023/02/14 20:14:20 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed{
private:
    int fixedValue;
    static const int fractionalBit = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &obj);
    Fixed &operator=(const Fixed &obj);
    Fixed(const int);
    Fixed(const float);
    int toInt(void) const;
    float toFloat(void) const;
    
    bool operator==(const Fixed &obj);
    bool operator!=(const Fixed &obj);
    bool operator>(const Fixed &obj);
    bool operator<(const Fixed &obj);
    bool operator>=(const Fixed &obj);
    bool operator<=(const Fixed &obj);
    
    Fixed operator+(const Fixed &obj);
    Fixed operator-(const Fixed &obj);
    Fixed operator*(const Fixed &obj);
    Fixed operator/(const Fixed &obj);

    Fixed operator++(void); // pre-incremet
    Fixed operator++(int); //post-increment
    Fixed operator--(void);
    Fixed operator--(int);
    
    static Fixed &min(Fixed &, Fixed &);
    static Fixed &max(Fixed &, Fixed &);
    static const Fixed &min(const Fixed &, const Fixed &);
    static const Fixed &max(const Fixed &, const Fixed &);
};
 std::ostream &operator<<(std::ostream &out, const Fixed &obj);