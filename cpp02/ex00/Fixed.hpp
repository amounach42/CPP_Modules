/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 01:10:58 by amounach          #+#    #+#             */
/*   Updated: 2023/02/14 01:10:59 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private:
        int number;
        static const int bit = 8;
    public:
        Fixed();
        Fixed(const Fixed &obj);
        Fixed &operator = (const Fixed &fixed);
        ~Fixed();
        int getRawBits(void) const;
        void    setRawBits(int const raw);
};
