/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:53:37 by amounach          #+#    #+#             */
/*   Updated: 2023/03/07 20:20:10 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> v;
        v.push_back(4);
        v.push_back(6);
        v.push_back(9);
        std::vector<int>::iterator it;
        it = easyfind(v, 10);
        std::cout << "----vector----" << std::endl;
        std::cout << "value found at index: " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::array<int, 4> a = {16, 2, 77, 29};
        std::array<int, 4>::iterator t = easyfind(a, 77);
        std::cout << "----array----" << std::endl;
        std::cout << *t << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::list<int> l;
        l.push_back(1);
        l.push_back(10);
        l.push_back(89);
        l.push_back(5);
        std::list<int>::iterator t = easyfind(l, 5);
        std::cout << "----list----" << std::endl;
        std::cout << *t << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::forward_list<int> f;
        f.push_front(5);
        f.push_front(0);
        f.push_front(9);
        f.push_front(7);
        std::forward_list<int>::iterator t = easyfind(f, 7);
        std::cout << "----forward_list----" << std::endl;
        std::cout << *t << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::deque<int> d;
        d.push_front(50);
        d.push_front(70);
        d.push_front(100);
        d.push_front(88);
        std::deque<int>::iterator t = easyfind(d, 100);
        std::cout << "----deque----" << std::endl;
        std::cout << *t << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}