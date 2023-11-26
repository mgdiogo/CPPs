/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:48:22 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/26 18:25:42 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Memory address of the string variable -> " << &string << std::endl;
	std::cout << "Memory address held by stringPTR -> " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF -> " << &stringREF << std::endl;
	std::cout << "\n";
	std::cout << "Value of the string variable  -> " << string << std::endl;
	std::cout << "Value pointed to by stringPTR -> " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF -> " << stringREF << std::endl;
}