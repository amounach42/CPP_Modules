/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 01:30:00 by amounach          #+#    #+#             */
/*   Updated: 2023/03/05 05:38:07 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
public:
    virtual ~Base();
    Base *generate(void);
    void identify(Base *p);
};

class A : public Base{};
class B : public Base{};
class C : public Base{};
#endif