/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:27:19 by mpedroso          #+#    #+#             */
/*   Updated: 2024/08/15 19:58:18 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &cpy) { *this = cpy; }

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &cpy) {
	if (this != &cpy)
		*this = cpy;
	return (*this);
}
ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string literal) {
	//checkDataType(literal);
	convertChar(literal);
	convertInt(literal);
	convertFloat(literal);
}

void ScalarConverter::convertChar(std::string literal) {
	int i;
	char c;
	
	if ((literal[0] >= 48 && literal[0] <= 57)) {
		i = literal[0] - '0';
		c = static_cast<char>(i);
		if (i < 32 || i == 127)
			std::cout << "char: " << "Non displayable" << std::endl;
		else
			std::cout << "char: " << c << std::endl;
	}
	if ((literal.length() == 1) && (isalpha(literal[0]))) {
		std::cout << "char: " << literal[0] << std::endl;
	}
}

void ScalarConverter::convertInt(std::string literal){
	int i;
	
	if ((literal[0] >= 48 && literal[0] <= 57)) {	
		i = literal[0] - '0';
		std::cout << "int: " << static_cast<int>(i) << std::endl;
	}
	else
		std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
}

void ScalarConverter::convertFloat(std::string literal) {
	int i;

	if ((literal[0] >= 48 && literal[0] <= 57)) {
		i = literal[0] - '0';
		std::cout << "float: "<< std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	}
	else 
		std::cout << "float: "<< std::fixed << std::setprecision(1) << static_cast<float>(literal[0]) << "f" << std::endl;
}