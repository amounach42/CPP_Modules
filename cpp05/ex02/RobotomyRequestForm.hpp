/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:37:30 by amounach          #+#    #+#             */
/*   Updated: 2023/03/03 18:39:19 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm{
    private:
        std::string Target;
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &obj);
        RobotomyRequestForm operator=(const RobotomyRequestForm &obj);
};
#endif