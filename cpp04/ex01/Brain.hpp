/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:18:24 by amounach          #+#    #+#             */
/*   Updated: 2023/02/19 20:54:41 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    protected:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &obj);
        Brain &operator = (const Brain &obj);
};
#endif