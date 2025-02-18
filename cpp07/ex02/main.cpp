/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:28:24 by mpedroso          #+#    #+#             */
/*   Updated: 2024/11/28 18:53:25 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
	Array<int> a(5);
	std::cout << "Set array values below: " << std::endl;
	a.setValues();
	Array<int> b(a);
	
	std::cout << "Array A -> ";
	for (unsigned int i = 0; i < a.size(); ++i) {
		if (i == 0)
			std::cout << "{ ";
		std::cout << a[i];
		if (i == a.size() - 1) {
			std::cout << " }" << std::endl;
			break ;
		}
		std::cout << " ";
	}
	std::cout << "Array B -> ";
	for (unsigned int i = 0; i < b.size(); ++i) {
		if (i == 0)
			std::cout << "{ ";
		std::cout << b[i];
		if (i == b.size() - 1) {
			std::cout << " }" << std::endl;
			break ;
		}
		std::cout << " ";
	}
	std::cout << "Change array b values: " <<std::endl;
	b.setValues();
	std::cout << "Array A -> ";
	for (unsigned int i = 0; i < a.size(); ++i) {
		if (i == 0)
			std::cout << "{ ";
		std::cout << a[i];
		if (i == a.size() - 1) {
			std::cout << " }" << std::endl;
			break ;
		}
		std::cout << " ";
	}
	std::cout << "Array B -> ";
	for (unsigned int i = 0; i < b.size(); ++i) {
		if (i == 0)
			std::cout << "{ ";
		std::cout << b[i];
		if (i == b.size() - 1) {
			std::cout << " }" << std::endl;
			break ;
		}
		std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << "** Out of bounds test **" << std::endl;
	try {
		std::cout << a[9] << std::endl;
	}
	catch (std::out_of_range &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}