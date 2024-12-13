/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:03:04 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/13 19:20:36 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <cctype>
# include <string>
# include <sstream>
# include <iomanip>

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
		static int checkDataType(std::string literal);
};

#endif