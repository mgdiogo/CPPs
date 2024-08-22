/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:03:04 by mpedroso          #+#    #+#             */
/*   Updated: 2024/08/15 18:55:03 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>

class ScalarConverter {
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &cpy);
		ScalarConverter& operator=(const ScalarConverter &cpy);
		~ScalarConverter();
		static void convert(std::string literal);
		static void convertChar(std::string literal);
		static void convertInt(std::string literal);
		static void convertFloat(std::string literal);
		static void convertDouble(std::string literal);
		//static void checkDataType(std::string literal);
};