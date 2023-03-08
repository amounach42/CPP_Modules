/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 00:34:07 by amounach          #+#    #+#             */
/*   Updated: 2023/03/08 00:37:42 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <list>
#include <iterator>
#include <iostream>
#include <stack>

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
public:
    typedef typename std::stack<T, container>::container_type::iterator iterator;
    MutantStack() 
    {
        std::cout << "MutantStack" << "\n";
    }
    ~MutantStack() 
    { 
        std::cout << "~MutantStack" << "\n"; 
        this->c.clear(); 
    }
    MutantStack(MutantStack const &copy) 
    { 
        *this = copy; 
    }
    MutantStack &operator=(MutantStack const &copyOperator)
    {
        this->c = copyOperator.c;
        return *this;
    }
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
};
#endif