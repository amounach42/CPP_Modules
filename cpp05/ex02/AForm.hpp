/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:38:06 by amounach          #+#    #+#             */
/*   Updated: 2023/03/03 20:53:59 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm{
    private:
        std::string const Name;
        bool isSigned;
        const unsigned int Grade;
        const unsigned int executeGrade;
    public : 
        AForm();
        virtual ~AForm();
        AForm(const AForm &obj);
        AForm &operator = (const AForm &obj);
        std::string getName() const;
        unsigned int getGrade() const;
        unsigned int getExecuteGrade() const;
        bool getIsSigned() const;
        AForm(std::string, unsigned int, unsigned int);
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        } ;
        void beSigned(Bureaucrat &);
        virtual void execute(Bureaucrat const & executor) const = 0;
};
#endif