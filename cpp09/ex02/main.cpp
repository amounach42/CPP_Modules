/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:23:25 by amounach          #+#    #+#             */
/*   Updated: 2023/05/24 19:25:18 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    PmergeMe obj;
    std::vector<int> vector;
    std::deque<int> deque;

    std::cout << "Before: ";
    for (int i = 1; i < ac; i++)
    {
        std::cout << av[i] << " "; 
        if (obj.isStringNumeric(av[i]))
        {
            std::cout << "Error: arguments must not contain a non digit character" << std::endl;
            exit(0);
        }
        vector.push_back(atoi(av[i]));
        deque.push_back(atoi(av[i]));
        obj.mergeSortDeque(deque);
        obj.mergeSortVector(vector);
    }
    std::cout << std::endl;
    std::cout << "After: ";
    for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    // clock_t tv;
    // clock_t dq;
    // tv = clock();
    // // obj.mergeSortVector(vector);
    // tv = clock() - tv;
    // dq = clock();
    // obj.mergeSortDeque(deque);
    // dq = clock() - dq;
}