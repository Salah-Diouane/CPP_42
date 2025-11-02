/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:50:57 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 14:51:38 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
    private:
        std::string target;

    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& obj);
		ShrubberyCreationForm&  operator=(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm();
        void        execute(Bureaucrat const &executor) const;
};

#endif
