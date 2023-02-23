/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:32:34 by amounach          #+#    #+#             */
/*   Updated: 2023/02/24 00:39:03 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    std::string const Name;
    unsigned int Grade;

public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat &operator=(const Bureaucrat &obj);
    Bureaucrat(const std::string);
    class GradeTooHighExeption : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooLowExeption : public std::exception
    {
    public:
        const char *what() const throw();
    };
    std::string getName();
    unsigned int getGrade();
    void setGrade(unsigned int);
    void increment(unsigned int);
    void decrement(unsigned int);
};
#endif
