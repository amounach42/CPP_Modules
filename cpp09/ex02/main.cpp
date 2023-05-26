/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:23:25 by amounach          #+#    #+#             */
/*   Updated: 2023/05/25 20:01:29 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    PmergeMe obj;
    std::vector<int> vector;
    std::deque<int> deque;

    if (ac == 1)
    {
        std::cout << "Error" << std::endl;
        exit(0);
    }
    for (int j = 1; j < ac; j++)
    {
        if (obj.isStringNumeric(av[j]))
        {
            std::cout << "Error" << std::endl;
            exit(0);
        }
    }
    std::cout << "Before: ";
    for (int i = 1; i < ac; i++)
    {

        std::cout << av[i] << " ";
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
    clock_t tv;
    clock_t dq;

    tv = clock();
    obj.mergeSortVector(vector);
    tv = clock() - tv; 
    double timeVector = ((double)tv) / CLOCKS_PER_SEC;
    std::cout
        << "Time to process range of  " << ac - 1 << " elements with std::vector " << timeVector << " s" << std::endl;

    dq = clock();
    obj.mergeSortDeque(deque);
    dq = clock() - dq;
    double timeDeque = ((double)dq) / CLOCKS_PER_SEC;
    std::cout << "Time to process range of  " << ac - 1 << " elements with std::deque " << timeDeque << " s" << std::endl;
}