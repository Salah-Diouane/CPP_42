/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:51:26 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 15:00:34 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#ifndef INTERN_HPP
#define INTERN_HPP

class AForm;

class Intern {
    private:
        std::string src;
    public:
        Intern();
        Intern(const Intern &src);
        ~Intern();
        Intern&     operator=(const Intern &src);
        AForm*      makeForm(std::string name_form, std::string target_form);

    class NotExestingForm : public std::exception
    {
        private:
            const char* msg;
        public:
            NotExestingForm();
            const char* what() const throw();
    };
};

#endif 