/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:11:36 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/26 17:57:45 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
	private:
		std::string const _name;
		int const _sign_grade;
		int const _exec_grade;
		bool _signed;
	public:
		Form(void);
		Form(const Form &cpy);
		Form(std::string name, int sign, int execute);
		~Form(void);
		Form& operator=(const Form &cpy);
		class GradeTooHighException : public std::exception {
		public: 
			virtual const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public: 
			virtual const char *what(void) const throw();
		};
		class FormTooHighException : public std::exception {
		public: 
			virtual const char *what(void) const throw();
		};
		class FormTooLowException : public std::exception {
			public: 
			virtual const char *what(void) const throw();
		};
		const std::string getName(void) const;
		int getSignGrade(void) const;
		int getExecGrade(void) const;
		bool getSigned(void) const;
		void beSigned(Bureaucrat b);
};

std::ostream& operator<<(std::ostream &os, const Form& f);