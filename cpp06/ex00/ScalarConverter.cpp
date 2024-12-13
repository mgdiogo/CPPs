/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:27:19 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/13 20:14:12 by mpedroso         ###   ########.fr       */
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
	int type = checkDataType(literal);
	
	switch (type) {
		case (1):
			convertChar(literal);
			break ;
		case (2):
			convertInt(literal);
			break ;
		case (3):
			convertFloat(literal);
			break ;
		case (4):
			convertDouble(literal);
			break ;
		default:
			std::cout <<  "No valid data type detected!" << std::endl;
	}
}

int ScalarConverter::checkDataType(std::string literal) {
	if (literal.length() == 1 && !isdigit(literal[0]))
		return (1);
	if (literal.find_first_not_of("+-0123456789") == std::string::npos)
		return (2);
	if (literal.find_first_not_of("+-0123456789.f") == std::string::npos || literal == "nanf" || literal == "+inff" || literal == "-inff" || literal == "inff")
		return (3);
	if (literal.find_first_not_of("+-0123456789.") == std::string::npos || literal == "nan" || literal == "+inf" || literal == "-inf" || literal == "inf")
		return (4);
	return (0);
}

void ScalarConverter::convertChar(std::string literal) {
	char c = literal[0];
	
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: "<< std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void ScalarConverter::convertInt(std::string literal){
	int integer;
	std::stringstream str(literal);
	str >> integer;

	if (integer >= 32 && integer <= 126)
		std::cout << "char: " << static_cast<char>(integer) << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(integer) << std::endl;
    std::cout << "float: "<< std::fixed << std::setprecision(1) << static_cast<float>(integer) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(integer) << std::endl;
}

void ScalarConverter::convertFloat(std::string literal) {
	if (literal == "nanf" || literal == "+inff" || literal == "-inff" || literal == "inff") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << literal.substr(0, literal.length() - 1) << std::endl;
	}
	else {
		int integer;
		std::stringstream str(literal);
		str >> integer;

		if (integer >= 32 && integer <= 126)
			std::cout << "char: " << static_cast<char>(integer) << std::endl;
		else
			std::cout << "char: non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(integer) << std::endl;
    	std::cout << "float: "<< std::fixed << std::setprecision(1) << static_cast<float>(integer) << "f" << std::endl;
    	std::cout << "double: " << static_cast<double>(integer) << std::endl;	
	}
	
}

void ScalarConverter::convertDouble(std::string literal) {
	if (literal == "nan" || literal == "+inf" || literal == "-inf" || literal == "inf") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal + "f" << std::endl;
		std::cout << "double: " << literal << std::endl;
	}
	else {	
		int integer;
		std::stringstream str(literal);
		str >> integer;

		if (integer >= 32 && integer <= 126)
			std::cout << "char: " << static_cast<char>(integer) << std::endl;
		else
			std::cout << "char: non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(integer) << std::endl;
    	std::cout << "float: "<< std::fixed << std::setprecision(1) << static_cast<float>(integer) << "f" << std::endl;
    	std::cout << "double: " << static_cast<double>(integer) << std::endl;
	}
}