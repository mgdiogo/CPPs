/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:11:36 by mpedroso          #+#    #+#             */
/*   Updated: 2024/07/02 13:28:23 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm {
	private:
		std::string const _name;
		int const _sign_grade;
		int const _exec_grade;
		bool _signed;
	public:
		AForm(void);
		AForm(const AForm &cpy);
		AForm(std::string name, int sign, int execute);
		virtual ~AForm(void);
		AForm& operator=(const AForm &cpy);
		class GradeTooHighException : public std::exception {
			public: 
				virtual const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public: 
				virtual const char *what(void) const throw();
		};
		class FormNotSigned : public std::exception {
			public:
				virtual const char *what(void) const throw();
		};
		class FormNotExecuted : public std::exception {
			public:
				virtual const char *what(void) const throw();
		};
		const std::string getName(void) const;
		int getSignGrade(void) const;
		int getExecGrade(void) const;
		bool getSigned(void) const;
		void beSigned(Bureaucrat b);
		virtual void execute(Bureaucrat const &executor) const;
};

std::ostream& operator<<(std::ostream &os, const AForm& f);