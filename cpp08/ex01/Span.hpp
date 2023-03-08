/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:55:20 by amounach          #+#    #+#             */
/*   Updated: 2023/03/07 23:38:37 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <list>

class Span{
    private:
        unsigned int N;
        std::vector<int> tab;
    public:
        Span();
        ~Span();
        Span(const Span &obj);
        Span &operator=(const Span &obj);
        Span(unsigned int);
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        void print()
        {
            for (size_t i = 0; i < N; i++)
            {
                std::cout << this->tab[i] << std::endl;
            }
        }
};
#endif

