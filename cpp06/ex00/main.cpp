/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:55:34 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/13 12:51:42 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	else
		std::cout << "Wrong parameters!" << std::endl;
	return 0;
}