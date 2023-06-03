/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:22:18 by amounach          #+#    #+#             */
/*   Updated: 2023/05/31 22:10:17 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
    (void)obj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
    (void)obj;
    return *this;
}

bool PmergeMe::isStringNumeric(std::string numbers)
{
    for (size_t i = 0; i < numbers.length(); i++)
        if (!isdigit(numbers[i]))
            return true;
    return false;
}

void PmergeMe::insertionSortDeque(std::deque<int> &deque)
{
    for (std::deque<int>::iterator it = deque.begin(); it < deque.end(); it++)
    {
        std::deque<int>::iterator itr = it + 1;
        for (; itr > deque.begin(); itr--)
        {
            if (itr != deque.begin() && *itr < *(itr - 1))
            {
                int tmp = *itr;
                *itr = *(itr - 1);
                *(itr - 1) = tmp;
            }
        }
    }
}

void PmergeMe::insertionSortVector(std::vector<int> &vector)
{
    for (std::vector<int>::iterator it = vector.begin(); it < vector.end(); it++)
    {

        std::vector<int>::iterator itr = it;
        for (; itr > vector.begin(); itr--)
        {
            if (itr != vector.begin() && *itr < *(itr - 1))
            {
                int tmp = *itr;
                *itr = *(itr - 1);
                *(itr - 1) = tmp;
            }
        }
    }
}

void PmergeMe::mergeVector(std::vector<int> &rightArray, std::vector<int> &leftArray, std::vector<int> &vector)
{
    int leftSize = vector.size() / 2;
    int rightSize = vector.size() - leftSize;
    int i = 0, left = 0, right = 0;

    while (left < leftSize && right < rightSize)
    {
        if (leftArray[left] < rightArray[right])
        {
            vector[i] = leftArray[left];
            i++;
            left++;
        }
        else
        {
            vector[i] = rightArray[right];
            i++;
            right++;
        }
    }
    while (left < leftSize)
    {
        vector[i] = leftArray[left];
        i++;
        left++;
    }
    while (right < rightSize)
    {
        vector[i] = rightArray[right];
        i++;
        right++;
    }
}

void PmergeMe::mergeSortVector(std::vector<int> &vector)
{
    std::vector<int>::iterator begin = vector.begin();
    std::vector<int>::iterator end = vector.end();

    std::vector<int>::iterator mid = begin + (end - begin) / 2;
    std::vector<int> leftArray;
    if ((int)vector.size() <= 1)
        return;
    leftArray.assign(begin, mid);
    std::vector<int> rightArray;
    rightArray.assign(mid, end);
    if (rightArray.size() <= 15 || leftArray.size() <= 15)
    {
        insertionSortVector(vector);
        return ;
    }
    mergeSortVector(leftArray);
    mergeSortVector(rightArray);
    mergeVector(rightArray, leftArray, vector);
}

void PmergeMe::mergeSortDeque(std::deque<int> &deque)
{
    std::deque<int>::iterator begin = deque.begin();
    std::deque<int>::iterator end = deque.end();
    std::deque<int>::iterator mid = begin + (end - begin) / 2;

    std::deque<int> leftArray;
    if ((int)deque.size() <= 1)
        return;
    leftArray.assign(begin, mid);
    std::deque<int> rightArray;
    rightArray.assign(mid, end);
    if (rightArray.size() <= 15 || leftArray.size() <= 15)
    {
        insertionSortDeque(deque);
        return ;
    }
    mergeSortDeque(leftArray);
    mergeSortDeque(rightArray);
    mergeDeque(rightArray, leftArray, deque);
}

void PmergeMe::mergeDeque(std::deque<int> &rightArray, std::deque<int> &leftArray, std::deque<int> &deque)
{
    int leftSize = deque.size() / 2;
    int rightSize = deque.size() - leftSize;
    int i = 0, left = 0, right = 0;

    while (left < leftSize && right < rightSize)
    {
        if (leftArray[left] < rightArray[right])
        {
            deque[i] = leftArray[left];
            i++;
            left++;
        }
        else
        {
            deque[i] = rightArray[right];
            i++;
            right++;
        }
    }
    while (left < leftSize)
    {
        deque[i] = leftArray[left];
        i++;
        left++;
    }
    while (right < rightSize)
    {
        deque[i] = rightArray[right];
        i++;
        right++;
    }
}
