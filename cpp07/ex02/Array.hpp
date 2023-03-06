/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 09:25:59 by amounach          #+#    #+#             */
/*   Updated: 2023/03/06 21:00:33 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    T *array;
    unsigned int sizeArray;

public:
    Array()
    {
        array = new T[0]();
        sizeArray = 0;
    };
    ~Array()
    {
        delete[] array;
        std::cout << "~Array" << std::endl;
    };
    Array(unsigned int n)
    {
        array = new T[n]();
        sizeArray = n;
    };
    Array(const Array &obj)
    {
        sizeArray = obj.sizeArray;
        array = new T[obj.sizeArray];
        for (unsigned int i = 0; i <= sizeArray; i++)
            array[i] = obj.array[i];
        this = obj;
    };
    Array &operator=(const Array &obj)
    {
        if (this != obj)
        {   
            sizeArray = obj.sizeArray;
            delete[] array;
            array = new T[sizeArray];
            for (int i = 0; i <= sizeArray; i++)
                array[i] = obj.array[i];
        }
        return (*this);
    };
    T &operator [](size_t size)
    {
        if (size >= this->sizeArray)
            throw std::out_of_range("index out of range !");
       return  this->array[size];
        
    };
    const T &operator [](size_t size) const 
    {
        if (size >= this->sizeArray)
            throw std::out_of_range("index out of range !");
       return  this->array[size];
        
    };
    unsigned int size() const
    {
        return (sizeArray);
    }
};
#endif