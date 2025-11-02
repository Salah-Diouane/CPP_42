/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:49:34 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 12:21:51 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
	private :
		const std::string   name;
		int                 grade;
	public :
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat& obj);
		Bureaucrat& operator=( Bureaucrat& other);
		~Bureaucrat();
		
		const std::string   getName() const;

		int                 getGrade() const;
		void                setGrade(int value);
		
		void increment_grade();
		void decrement_grade();


		class GradeTooHighException : public std::exception
		{
			private :
				const char* msg;
			public :
				GradeTooHighException();
				const char* what() const throw();
		};

		class GradeTooLowException  : public std::exception
		{
			private :
				const char* msg;
			public :
				GradeTooLowException();
				const char* what() const throw();
		};

		void                signForm(Form &form);
};

std::ostream&				operator<<(std::ostream& os, const Bureaucrat& b);

#endif