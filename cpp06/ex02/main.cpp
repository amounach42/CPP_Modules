/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:53:37 by amounach          #+#    #+#             */
/*   Updated: 2023/03/05 08:24:34 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

Base *generate(void)
{
    if (std::rand() % 3 == 0)
        return (new A);
    else if (std::rand() % 3 == 2)
        return (new C);
    else
        return (new B);
}

void identify(Base *ptr)
{
    if (dynamic_cast<A *>(ptr))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(ptr))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(ptr))
        std::cout << "C" << std::endl;
    else
        std::cout << "unknown" << std::endl;
}

void identify(Base &ptr)
{
    try
    {
        A &a = dynamic_cast<A &>(ptr);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch (const std::exception &e)
    {
    }
    try
    {
        B &b = dynamic_cast<B &>(ptr);
        std::cout << "B" << std::endl;
        (void)b;
    }
    catch (const std::exception &e)
    {
    }
    try
    {
        C &c = dynamic_cast<C &>(ptr);
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch (const std::exception &e)
    {
    }
}

int main()
{
    Base *a = generate();
    Base *b = generate();
    Base *c = generate();
    Base *d = generate();

    identify(a);
    identify(b);
    identify(c);
    identify(d);

    identify(*a);
    identify(*b);
    identify(*c);
    identify(*d);

    delete a;
    delete b;
    delete c;
    delete d;
}