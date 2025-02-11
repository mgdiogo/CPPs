/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:03:04 by mpedroso          #+#    #+#             */
/*   Updated: 2025/02/06 14:06:39 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <cctype>
# include <string.h>
# include <sstream>
# include <iomanip>
# include <limits>
# include <cstdio>

class ScalarConverter {
	private:
		ScalarConverter();
	public:
		ScalarConverter(const ScalarConverter &cpy);
		ScalarConverter& operator=(const ScalarConverter &cpy);
		~ScalarConverter();
		static void convert(std::string literal);
		static void convertChar(std::string literal);
		static void convertInt(std::string literal);
		static void convertFloat(std::string literal);
		static void convertDouble(std::string literal);
};

#endif