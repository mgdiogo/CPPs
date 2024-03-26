/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:09:59 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/26 18:09:36 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <iostream>

class Form;

class Bureaucrat {
	private:
		std::string const _name;
		int _grade;
	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat& operator=(const Bureaucrat &cpy);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		const std::string getName(void) const;
		int	getGrade(void) const;
		void increment();
		void decrement();
		void signForm(Form &f);
		class GradeTooHighException : public std::exception {
			public: 
				virtual const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public: 
				virtual const char *what(void) const throw();
		};
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat& b);