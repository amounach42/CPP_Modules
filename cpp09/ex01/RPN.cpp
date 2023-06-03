/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:57:08 by amounach          #+#    #+#             */
/*   Updated: 2023/05/31 22:09:24 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(const RPN &obj)
{
   (void)obj;
}

RPN &RPN::operator=(const RPN &obj)
{
   (void)obj;
   return *this;
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
      if (b == 0)
         {
            std::cout << "Error: cannot divide by 0\n";
            exit(0);
         }
      stack.push(a / b);
   }
} 