/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:49:42 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/15 16:57:34 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"


class Form {
    private:
        const std::string   name;
        bool                is_signed;
        int                 grade_sign;
        int                 grade_execute;

    public:
        Form();
        Form(const std::string name, bool value, int grad_s, int grad_e);
        Form(const Form& obj);
        Form& operator=(const Form& other);
        ~Form();

        void                beSigned(Bureaucrat obj);

        class GradeTooHighException : public std::exception {
            private:
                const char* msg;
            public:
                GradeTooHighException();
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            private:
                const char* msg;
            public:
                GradeTooLowException();
                const char* what() const throw();
        };

        void                setIs_signed(bool value);
        void                setGradsign(int value);
        void                setGradexecute(int value);

        bool                getIs_signed() const;
        int                 getGradsign() const;
        int                 getGradexecute() const;
        const std::string   getName() const;

};

std::ostream&               operator<<(std::ostream& os, const Form& b);

#endif 
