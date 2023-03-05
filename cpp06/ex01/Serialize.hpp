/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 23:24:59 by amounach          #+#    #+#             */
/*   Updated: 2023/03/05 00:45:52 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

struct Data{
    int number;
};

class Seralizer{
    public:
        uintptr_t serialize(Data *ptr);
        Data *deserialize(uintptr_t raw);
};
#endif