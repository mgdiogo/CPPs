/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:09:57 by mpedroso          #+#    #+#             */
/*   Updated: 2024/07/02 16:00:59 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	{
		try
		{
			Bureaucrat migas("migas", 130);
			ShrubberyCreationForm shrubberyForm;

			std::cout << shrubberyForm << std::endl;

			migas.executeForm(shrubberyForm);

			migas.signForm(shrubberyForm);

			migas.executeForm(shrubberyForm);

			std::cout << shrubberyForm << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		try
		{
			Bureaucrat migas("migas", 43);
			RobotomyRequestForm robotomyForm("clank");

			std::cout << robotomyForm << std::endl;

			migas.executeForm(robotomyForm);

			migas.signForm(robotomyForm);

			migas.executeForm(robotomyForm);

			std::cout << robotomyForm << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	
	{
		try
		{
			Bureaucrat migas("migas", 20);
			PresidentialPardonForm presidentialForm("lela");

			std::cout << presidentialForm << std::endl;

			migas.executeForm(presidentialForm);

			migas.signForm(presidentialForm);

			migas.executeForm(presidentialForm);

			std::cout << presidentialForm << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}