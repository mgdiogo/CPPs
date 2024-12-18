/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:09:57 by mpedroso          #+#    #+#             */
/*   Updated: 2024/07/24 21:15:16 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	{
		try {
			Bureaucrat john("john", 150);
			Bureaucrat angela("angela", 149);

			std::cout << john << std::endl;
			std::cout << angela << std::endl;
			angela.decrement();
			std::cout << angela << std::endl;
			john.decrement();
			std::cout << john << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try {
			std::cout << "-----------------------" << std::endl;
			Bureaucrat andrew("andrew", 1);
			Bureaucrat migas("migas", 2);

			std::cout << andrew << std::endl;
			std::cout << migas << std::endl;
			migas.increment();
			std::cout << migas << std::endl;
			andrew.increment();
			std::cout << andrew << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
}