/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:51:00 by mpedroso          #+#    #+#             */
/*   Updated: 2025/02/11 17:27:44 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void) {
	std::vector<int> vec(5);
	
	vec[0] = 0;
	vec[1] = 5;
	vec[2] = 9;
	vec[3] = 33;
	vec[4] = 55;
	
	try {
		std::cout << easyfind(vec, 43) << std::endl;
	}
	catch (std::runtime_error &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}