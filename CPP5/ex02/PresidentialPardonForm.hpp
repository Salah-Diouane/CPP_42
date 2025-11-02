/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:50:34 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 14:34:59 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        std::string target;

    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		PresidentialPardonForm&  operator=(const PresidentialPardonForm& other);
		~PresidentialPardonForm();
        void        execute(Bureaucrat const &executor) const;
};
 
#endif
    