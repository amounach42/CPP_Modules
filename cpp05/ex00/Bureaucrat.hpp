/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:32:34 by amounach          #+#    #+#             */
/*   Updated: 2023/02/23 23:06:13 by amounach         ###   ########.fr       */
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
            const char* what() const noexcept override
            {
                return "Grade is too high!";
            }
            
    }
    class GradeTooLowExeption : public std::exception
    {
        public:
            const char* what() const noexcept override
            {
                return "Grade is too low!";
            }
    }
    std::string getName();
    void setName(std::string);
    std::string getGrade();
    void setGrade(unsigned int);
    void increment(unsigned int);
    void decrement(unsigned int);
};
#endif
