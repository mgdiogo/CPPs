/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:09:57 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/26 18:12:00 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	{
		try {
			Bureaucrat john("john", 150);
			Form test("test", 149, 149);
			
			std::cout << test << std::endl;
			
			john.signForm(test);
			std::cout << test << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		try {
			Bureaucrat andrew("andrew", 1);
			Form test("test", 149, 149);
			
			std::cout << test << std::endl;

			andrew.signForm(test);
			std::cout << test << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}