/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:59:15 by amounach          #+#    #+#             */
/*   Updated: 2023/03/03 20:54:07 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm :  public AForm
{
    private:
        std::string Target;
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
        virtual void execute(Bureaucrat const &executor) const;
        ShrubberyCreationForm(std::string);
};
#endif