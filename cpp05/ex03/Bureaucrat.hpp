/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:32:34 by amounach          #+#    #+#             */
/*   Updated: 2023/03/03 19:15:07 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

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
    std::string getName() const;
    unsigned int getGrade() const;
    Bureaucrat(const std::string name, unsigned int grade);
    void setGrade(unsigned int);
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm&);
    void executeForm(AForm const & form);
};
std::ostream &operator<<(std::ostream &, const Bureaucrat &);
#endif
