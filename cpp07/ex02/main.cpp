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

	for (unsigned int i = 0; i < a.size(); ++i)
		a[i] = i;
	Array<int> b(a);
	const Array<int> c(a);
	Array<int> empty;

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
	std::cout << "Array B after changes" <<std::endl;
	int j = 0;
	for (unsigned int i = 5; i > 0; --i) {
		b[j] = i - 1;
		j++;
	}
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
	std::cout << std::endl;
	std::cout << "Array C -> ";
	for (unsigned int i = 0; i < c.size(); ++i) {
		if (i == 0)
			std::cout << "{ ";
		std::cout << c[i];
		if (i == c.size() - 1) {
			std::cout << " }" << std::endl;
			break ;
		}
		std::cout << " ";
	}

	std::cout << "Empty array size -> " << empty.size() << std::endl;
	return (0);
}