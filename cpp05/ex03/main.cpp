/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:09:57 by mpedroso          #+#    #+#             */
/*   Updated: 2024/07/24 21:07:02 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	{
		try {
			Intern intern;
			AForm *form;

			form = intern.makeForm("shrubbery creation", "bengala");
			std::cout << form->getName() << " was created successfully!" << std::endl;
			delete (form);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try {
			Intern intern;
			AForm *form;

			form = intern.makeForm("random form", "bengala");
			std::cout << form->getName() << " was created successfully!" << std::endl;
			delete (form);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		} 
	}
	return (0);
}