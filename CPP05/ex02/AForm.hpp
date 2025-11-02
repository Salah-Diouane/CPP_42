/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:49:58 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/15 16:59:15 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"


class AForm {
	private:
		const std::string   name;
		bool                is_signed;
		int                 grade_sign;
		int                 grade_execute;

	public:
		AForm();
		AForm(const std::string name, bool value, int grad_s, int grad_e);
		AForm(const AForm& obj);
		AForm&  operator=(const AForm& other);
		virtual ~AForm();


		class GradeTooHighException : public std::exception  {
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
				const char*  what() const throw();
		};

		class FormNotSignedException : public std::exception {
			private:
				const char* msg;
			public:
				FormNotSignedException();
				const char* what() const throw();
		};

		class AlreadySigned : public std::exception {
			private:
				const char* msg;
			public:
				AlreadySigned();
				const char* what() const throw();
		};

		
		void                setIs_signed(bool value);
		void                setGradsign(int value);
		void                setGradexecute(int value);

		bool				getIs_signed() const;
		int					getGradsign() const;
		int					getGradexecute() const;
		const std::string	getName() const;

		virtual void		execute(Bureaucrat const & executor) const = 0;
		void				beSigned(Bureaucrat obj);

};

std::ostream&				operator<<(std::ostream& os, const AForm& b);

#endif 
