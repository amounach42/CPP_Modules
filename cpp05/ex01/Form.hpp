/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:57:02 by amounach          #+#    #+#             */
/*   Updated: 2023/03/02 01:38:59 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Form{
    private:
        std::string const Name;
        bool isSigned;
        unsigned int const Grade;
    public:
        Form();
        ~Form();
        Form(const Form &obj);
        Form &operator = (const Form &obj);
        std::string getName() const;
        unsigned int getGrade() const;
        Form(std::string name, );
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        }
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        } 
        void beSigned(Bureaucrat &);
              
};
#endif