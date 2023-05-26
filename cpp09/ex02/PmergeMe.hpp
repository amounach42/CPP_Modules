/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:20:22 by amounach          #+#    #+#             */
/*   Updated: 2023/05/25 16:16:18 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cmath>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <ctime>

class PmergeMe{
    private:
    public:
    PmergeMe();
    ~PmergeMe();
    bool isStringNumeric(std::string);
    void insertionSortDeque(std::deque<int> &deque);
    void insertionSortVector(std::vector<int> &vector);
    void mergeVector(std::vector<int> &rightArray, std::vector<int> &leftArray, std::vector<int> &vector);
    void mergeSortVector(std::vector<int> &vector);
    void mergeSortDeque(std::deque<int> &deque);
    void mergeDeque(std::deque<int> &rightArray, std::deque<int> &leftArray, std::deque<int> &deque);
};
#endif