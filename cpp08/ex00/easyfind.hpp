/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:27:46 by amounach          #+#    #+#             */
/*   Updated: 2023/03/07 20:18:52 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <forward_list>
#include <deque>
template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator ptr = std::find(container.begin(), container.end(), value);
    if (ptr == container.end())
        throw std::out_of_range("occurence not found");
    return (ptr);
}
#endif