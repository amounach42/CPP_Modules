/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:32:34 by amounach          #+#    #+#             */
/*   Updated: 2023/02/22 00:10:30 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
    private:
        std::string const Name;
        unsigned int Grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator = (const Bureaucrat &obj);
        Bureaucrat(const std::string);
        void GradeTooHighExeption();
        void GradeTooLowExeption();
        std::string getName();
        void setName(std::string);
};
#endif
