/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:40:08 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/24 18:09:33 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string	action;
	PhoneBook phone_book;
	
	std::cout << "Welcome to your PhoneBook!\n" << std::endl;
	while (1)
	{
		if (!std::cin.eof())
		{
			phone_book.displayMenu();
			std::cout << "PhoneBook -> ";
		}
		std::getline(std::cin, action);
		if (std::cin.eof())
			return (0);
		std::cout << "\n";
		if (action == "ADD")
			phone_book.addContact();
		else if (action == "SEARCH")
			phone_book.searchContact();
		else if (action == "EXIT")
			return (0);
		else
			std::cout << RED << "\n" << action << " is not a valid option!\n" << CLEAR << std::endl;
	}
	return (0);
}