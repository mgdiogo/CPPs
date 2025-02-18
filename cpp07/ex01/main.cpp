/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:52:35 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/05 19:40:36 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
	int arr_i[5] = {0, 1, 2, 3 ,4};
	double arr_d[5] = {'a', 'b', 'c', 'd', 'e'};
	char arr_c[5] = {'a', 'b', 'c', 'd', 'e'};

	iter(arr_i, 5, increment);
	iter(arr_d, 5, increment);
	iter(arr_c, 5, increment);

	for (int i = 0; i < 5; ++i) {
		if (i == 0)
			std::cout << "{ ";
		std::cout << arr_i[i] << " ";
		if (i == 4)
			std::cout << "}" << std::endl;
	}
	for (int i = 0; i < 5; ++i) {
		if (i == 0)
			std::cout << "{ ";
		std::cout << arr_d[i] << " ";
		if (i == 4)
			std::cout << "}" << std::endl;
	}
	for (int i = 0; i < 5; ++i) {
		if (i == 0)
			std::cout << "{ ";
		std::cout << arr_c[i] << " ";
		if (i == 4)
			std::cout << "}" << std::endl;
	}
	return (0);
}
