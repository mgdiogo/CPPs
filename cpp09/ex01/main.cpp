/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:36:56 by mpedroso          #+#    #+#             */
/*   Updated: 2025/03/31 16:44:32 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		try {
			RPN rpn;
			std::string arg = argv[1];
			for (size_t i = 0; i < arg.size(); i++) {
				if (arg[i] != ' ' && arg[i] != '\0') {	
					if (isdigit(arg[i]) && isdigit(arg[i + 1]))
						throw std::invalid_argument("Error: numbers can't be greater than 9.");
					if (isdigit(arg[i]))
						rpn.addToStack(arg[i] - '0');
					else
						rpn.operation(arg[i]);
				}
			}
			if (rpn.getSize() != 1)
				throw std::invalid_argument("Error: invalid RPN expression.");
			rpn.getResult();
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "Usage -> ./RPN \"expression\"" << std::endl;
}