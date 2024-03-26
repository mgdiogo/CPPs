/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:09:57 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/26 16:49:28 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	{
		try {
			Bureaucrat john("john", 150);

			std::cout << john << std::endl;
			john.decrement();
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		try {
			Bureaucrat andew("andew", 1);

			std::cout << andew << std::endl;
			andew.increment();
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}