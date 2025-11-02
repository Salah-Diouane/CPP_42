/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:50:50 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 14:51:24 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm {
    private:
        std::string target;

    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& obj);
		RobotomyRequestForm&  operator=(const RobotomyRequestForm& other);
		~RobotomyRequestForm();
        void        execute(Bureaucrat const &executor) const;
};

#endif
