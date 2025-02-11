/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:27:19 by mpedroso          #+#    #+#             */
/*   Updated: 2025/02/11 17:18:53 by mpedroso         ###   ########.fr       */
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
	convertChar(literal);
	convertInt(literal);
	convertFloat(literal);
	convertDouble(literal);
}

void ScalarConverter::convertChar(std::string literal) {
	double d;
	char c;
	std::istringstream ss(literal);
	
	if (literal == "nan" || literal == "nanf" || literal == "inf" || literal == "+inf" 
	|| literal == "-inf" || literal == "inff" || literal == "+inff" || literal == "-inff" || literal[0] == '\0')
		std::cout << "char: impossible" << std::endl;
	else if (literal.length() == 1 && !isdigit(literal[0])) {	
		if (literal[0] >= 32 && literal[0] <= 126)
    		std::cout << "char: " << literal[0] << std::endl;
	}
	else if ((ss >> d) && (ss.peek() == EOF || (ss >> c && c == 'f' && ss.peek() == EOF))) {
		int i = static_cast<int>(d);
		if (i < 0) {
			std::cout << "char: impossible" << std::endl;
			return;
		}
		if (i >= std::numeric_limits<int>::min() && i <= std::numeric_limits<int>::max()) {
			
			if (i < 32 || i > 126)
				std::cout << "char: non displayable" << std::endl;
			else {
				c = i;
				std::cout << "char: " << c << std::endl;
			}
		} else
			std::cout << "char: impossible" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
}

void ScalarConverter::convertInt(std::string literal) {
	double d;
	char c;
	std::istringstream ss(literal);
	if (literal == "nan" || literal == "nanf" || literal == "inf" || literal == "+inf" 
	|| literal == "-inf" || literal == "inff" || literal == "+inff" || literal == "-inff" || literal[0] == '\0')
		std::cout << "int: impossible" << std::endl;
	else if (literal.length() == 1 && !isdigit(literal[0])) {
		if (literal[0] >= 32 && literal[0] <= 126)
    		std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
	}
	else if ((ss >> d) && (ss.peek() == EOF || (ss >> c && c == 'f' && ss.peek() == EOF))) {
		int i = static_cast<int>(d);
		if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
			std::cout << "int: " << i << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}
	else
		std::cout << "int: impossible" << std::endl;
}

void ScalarConverter::convertFloat(const std::string literal) {
	char c;
	float f;
	std::istringstream ss(literal);
	
	if (literal == "nan" || literal == "nanf")
		std::cout << "float: nanf" << std::endl;
	else if (literal == "inf" || literal == "+inf" || literal == "-inf")
		std::cout << "float: "<< literal << "f" << std::endl;
	else if (literal == "inff" || literal == "+inff" || literal == "-inff")
		std::cout << "float: " << literal << std::endl;
	else if (literal.length() == 1 && !isdigit(literal[0])) {
		if (literal[0] >= 32 && literal[0] <= 126)
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(literal[0]) << "f" << std::endl;
	}
	else if ((ss >> f) && (ss.peek() == EOF || (ss >> c && c == 'f' && ss.peek() == EOF)))
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
}


void ScalarConverter::convertDouble(std::string literal) {
	char c;
	double d;
	std::istringstream ss(literal);

	if (literal == "nan" || literal == "nanf")
		std::cout << "double: nan" << std::endl;
	else if (literal == "inf" || literal == "+inf" || literal == "-inf")
		std::cout << "double: "<< literal << std::endl;
	else if (literal == "inff" || literal == "+inff" || literal == "-inff")
		std::cout << "double: " << literal.substr(0, literal.length() - 1) << std::endl;
	else if (literal.length() == 1 && !isdigit(literal[0])) {
		if (literal[0] >= 32 && literal[0] <= 126)
			std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(literal[0]) << std::endl;
	}
	else if ((ss >> d) && (ss.peek() == EOF || (ss >> c && c == 'f' && ss.peek() == EOF)))
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}