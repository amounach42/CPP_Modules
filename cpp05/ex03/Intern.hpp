/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:37:33 by amounach          #+#    #+#             */
/*   Updated: 2023/03/03 23:45:48 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
    Intern();
    ~Intern();
    Intern(const Intern &obj);
    Intern &operator=(const Intern &obj);
    AForm *makeForm(std::string Form, std::string target);
    class ErrorIntern : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

#endif