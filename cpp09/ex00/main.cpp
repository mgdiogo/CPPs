/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:38:18 by mpedroso          #+#    #+#             */
/*   Updated: 2025/02/12 17:38:19 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		try {
			BitcoinExchange btc;
			std::ifstream inFile(argv[1]);
			if (inFile.fail())
				throw std::runtime_error("Input file does not exist!");
			if (inFile.peek() == '\n' || inFile.eof())
				throw std::runtime_error("Input file is empty!");
			std::string header;
			std::getline(inFile, header);
			if (header != "date | value")
				throw std::runtime_error("Input file should start with: <date | value>");
			btc.parseFile(inFile);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cerr << "Wrong parameters" << std::endl;
	return (0);
}