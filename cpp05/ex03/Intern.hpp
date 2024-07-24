/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 19:34:08 by mpedroso          #+#    #+#             */
/*   Updated: 2024/07/24 20:50:00 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern &cpy);
		Intern& operator=(const Intern &cpy);
		~Intern();
		AForm *makeForm(std::string form, std::string target);
		class FormNotCreated : public std::exception {
			public: 
				virtual const char *what(void) const throw();
		};
};