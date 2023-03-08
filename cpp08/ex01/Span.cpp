/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:25:40 by amounach          #+#    #+#             */
/*   Updated: 2023/03/08 00:32:30 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::~Span()
{
}

Span::Span(const Span &obj)
{
    *this = obj;
}

Span &Span::operator=(const Span &obj)
{
    this->N = obj.N;
    this->tab = obj.tab;
    return (*this);
}

Span::Span(unsigned int n)
{
    this->N = n;
    std::cout << "~Span" << std::endl;
}

void Span::addNumber(int number)
{

    if (this->tab.size() >= N)
        throw std::out_of_range("out of range");
    this->tab.push_back(number);
}

int Span::shortestSpan()
{
    int temp;
    try
    {
        if (this->tab.size() == 1)
            throw std::out_of_range("Invalid size");
        std::sort(this->tab.begin(), this->tab.end());
        temp = this->tab.at(1) - this->tab.at(0);
        int i = 0;
        while (i < (int)this->tab.size() - 1)
        {
            int shortest = this->tab.at(i + 1) - this->tab.at(i);
            if (temp > shortest)
                temp = shortest;
            i++;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        exit(0);
    }
    return (temp);
}

int Span::longestSpan()
{
    std::vector<int>::iterator itBegin;
    std::vector<int>::iterator itEnd;
    try
    {
        if (this->tab.size() == 1)
            throw std::out_of_range("Invalid size");
        std::sort(this->tab.begin(), this->tab.end());
        itBegin = this->tab.begin();
        itEnd = this->tab.end() - 1;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        exit(0);
    }
    return (*(itEnd) - *(itBegin));
}
