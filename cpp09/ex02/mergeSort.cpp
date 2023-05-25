#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::insertionSortDeque(std::deque<int> &deque)
{
    for (std::deque<int>::iterator it = deque.begin(); it < deque.end(); it++)
    {
        std::deque<int>::iterator itr = it;
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
    for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); ++it)
        std::cout << *it << std::endl;
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
    for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
        std::cout << *it << std::endl;
}


void PmergeMe::mergeSortVector(std::vector<int> &vector)
{
    std::vector<int>::iterator begin = vector.begin();
    std::vector<int>::iterator end = vector.end();

    std::vector<int>::iterator mid = begin + (end - begin) / 2;
    std::vector<int> leftArray;
    leftArray.assign(begin, mid);

    std::vector<int> rightArray;
    rightArray.assign(mid, end);
    for (int i = 0; i < rightArray.size(); i++)
        std::cout << rightArray[i] << std::endl;
    std::cout << "----------------" << std::endl;
    for (int i = 0; i < leftArray.size(); i++)
        std::cout << leftArray[i] << std::endl;
    if (rightArray.size() >= 15 || leftArray.size() >= 15)
    {
        mergeSortVector(leftArray);
        mergeSortVector(rightArray);
        mergeVector(rightArray, leftArray, vector);
    }
}

void PmergeMe::mergeVector(std::vector<int> &rightArray, std::vector<int> &leftArray, std::vector<int> &vector)
{

    int size = vector.size();

    if (size >= 15)
    {
        mergeSortVector(vector);
    }
    else
    {
        insertionSortVector(vector);
    }
}

void PmergeMe::mergeSortDeque(std::deque<int> &deque)
{
    std::deque<int>::iterator begin = deque.begin();
    std::deque<int>::iterator end = deque.end();

    std::deque<int>::iterator mid = begin + (end - begin) / 2;
    std::deque<int> leftArray;
    leftArray.assign(begin, mid);
    std::deque<int> rightArray;
    rightArray.assign(mid, end);
    for (int i = 0; i < rightArray.size(); i++)
        std::cout << rightArray[i] << std::endl;
    std::cout << "----------------" << std::endl;
    for (int i = 0; i < leftArray.size(); i++)
        std::cout << leftArray[i] << std::endl;
    if (leftArray.size() >= 15 || rightArray.size() >= 15)
    {
        mergeSortDeque(leftArray);
        mergeSortDeque(rightArray);
        mergeDeque(rightArray, leftArray, deque);
    }
}

void PmergeMe::mergeDeque(std::deque<int> &rightArray, std::deque<int> &leftArray, std::deque<int> &deque)
{

    int size = deque.size();

    if (size >= 15)
    {
        mergeSortDeque(deque);
    }
    else
    {
        insertionSortDeque(deque);
    }
}
