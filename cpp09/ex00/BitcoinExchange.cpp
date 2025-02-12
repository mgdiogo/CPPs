/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:38:22 by mpedroso          #+#    #+#             */
/*   Updated: 2025/02/12 17:59:03 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy) {
		this->lela = cpy.lela;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &cpy) {
	if (this != &cpy)
		this->lela = cpy.lela;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::parseFile(std::ifstream &fileName) {
	std::string nextline;
	while (std::getline(fileName, nextline)) {
		char s;
		float value;
		std::string date;
		std::istringstream iss(nextline);
		if (nextline == "")
			continue;
		iss >> date >> s >> value;
		if (!checkDate(date))
			throw std::runtime_error("Invalid date format!");
		else if (value > 1000 || value < 0)
			throw std::runtime_error("Invalid value!");
	}
}

int BitcoinExchange::checkDate(const std::string &date) {
	if (date[4] != '-' || date[7] != '-')
		return (0);
	char s;
	int year, month, day;
	std::istringstream iss(date);
	iss >> year >> s >> month >> s >> day;
	if (year < 0 || (month < 1 || month > 12) || (day < 0 || day > 31))
		return (0);
	return (1);
}