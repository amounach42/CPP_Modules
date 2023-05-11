/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 09:59:01 by amounach          #+#    #+#             */
/*   Updated: 2023/05/11 15:17:53 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int is_operaion(char operation)
{
    return (operation == '+' || operation == '-' || operation == '*' || operation == '/' );    
}

int main(int ac, char **av)
{
    RPN rpn;

    (void)ac;
    int j = 0;
    std::stack<float> stack;
    while (av[1][j])
    {
        while (av[1][j] == ' ')
            j++;
        if (av[1][j] == '\0')
            continue;
        if (isdigit(av[1][j]))
            stack.push(av[1][j] - '0');
        else if (is_operaion(av[1][j]))
            rpn.operation(av[1][j], stack);
        else
        {
            std::cout << "Error" << std::endl;
            return 0;
        }
        j++;
    }
    if (stack.size() != 1)
    {
        std::cout << "Error" << std::endl;
        return(0);
    }
    std::cout << stack.top() << std::endl;
}