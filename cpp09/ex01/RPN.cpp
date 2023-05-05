/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:57:08 by amounach          #+#    #+#             */
/*   Updated: 2023/05/05 16:35:16 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

void RPN::operation(char formula, std::stack<float> &stack)
{

   int a, b;
   if (stack.size() < 2)
   {
      std::cout << "Error" << std::endl;
      exit(0);
   }
   if (formula == '+')
   {
      b = stack.top();
      stack.pop();
      a = stack.top();
      stack.pop();
      stack.push(a + b);
   }
   else if (formula == '-')
   {
      b = stack.top();
      stack.pop();
      a = stack.top();
      stack.pop();
      stack.push(a - b);
   }
   else if (formula == '*')
   {
      b = stack.top();
      stack.pop();
      a = stack.top();
      stack.pop();
      stack.push(a * b);
   }
   else if (formula == '/')
   {
      b = stack.top();
      stack.pop();
      a = stack.top();
      stack.pop();
      stack.push(a / b);
   }
}