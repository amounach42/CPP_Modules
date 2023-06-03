/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:31:19 by amounach          #+#    #+#             */
/*   Updated: 2023/05/31 22:00:15 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cmath>
#include <cctype>

class RPN
{
public:
    RPN();
    ~RPN();
    RPN(const RPN &obj);
    RPN &operator=(const RPN &obj);
    void operation(char, std::stack<float> &);
    
};

#endif