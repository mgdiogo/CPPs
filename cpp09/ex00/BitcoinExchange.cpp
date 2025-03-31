/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:38:22 by mpedroso          #+#    #+#             */
/*   Updated: 2025/03/31 16:40:30 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::ifstream inFile("data.csv");
	if (inFile.fail())
		throw std::runtime_error("Input file does not exist!");
	if (inFile.peek() == '\n' || inFile.eof())
		throw std::runtime_error("Input file is empty!");
	std::string header;
	std::getline(inFile, header);
	if (header != "date,exchange_rate")
		throw std::runtime_error("data.csv file should start with: <date,exchange_rate>");
	std::string nextline;
	while (std::getline(inFile, nextline)) {
		std::istringstream iss(nextline);
		std::string date, valueStr;
		float value;
		if (nextline == "")
			continue;
		std::getline(iss, date, ',');
		std::getline(iss, valueStr);
		std::istringstream valueStream(valueStr);
		valueStream >> value;
		_exchange.insert(std::pair<std::string, float>(date, value));
	}
	
	// for (std::map<std::string, float>::iterator it = _exchange.begin(); it != _exchange.end(); ++it)
	// 	std::cout << "Date: [" << it->first << "] -- " << "Value: [" << it->second << "]" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy) {
		this->_exchange = cpy._exchange;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &cpy) {
	if (this != &cpy)
		this->_exchange = cpy._exchange;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::parseFile(std::ifstream &fileName) {
	std::string nextline;
	while (std::getline(fileName, nextline)) {
		float value;
		std::string date;
		std::string valueStr;
		std::istringstream iss(nextline);
		if (nextline == "")
			continue;
		std::getline(iss, date, ',');
		std::getline(iss, valueStr);
		std::istringstream valueStream(valueStr);
		valueStream >> value;
		if (!checkDate(date))
			std::cout << "Error: bad input -> " << date << std::endl;
		else if (value > 1000)
			std::cout << "Error: number too large -> " << value << std::endl;
		else if (value < 0)
			std::cout << "Error: not a positive number -> " << value << std::endl;
		else
			processValue(date, value);
	}
}

int BitcoinExchange::checkDate(const std::string &date) {
	if (date[4] != '-' || date[7] != '-')
		return (0);
	char s;
	int year, month, day;
	std::istringstream iss(date);
	iss >> year >> s >> month >> s >> day;
	if (year < 0 || (month < 1 || month > 12) || (day < 0 || day > 31) || iss >> day)
		return (0);
	if ((month == 2) && (year % 4 == 0) && (day > 29))
    	return (0);
	if ((month == 2) && (year % 4 != 0) && (day > 28))
    	return (0);
	return (1);
}

void BitcoinExchange::processValue(std::string date, float value) {
	float finalValue = 0;
	
	std::map<std::string, float>::iterator it = _exchange.lower_bound(date);
	
	if (it == _exchange.end() || it->first != date) {
		if (it != _exchange.begin())
		    --it;
	}
	finalValue = it->second * value;
	std::cout << std::fixed << std::setprecision(2) << finalValue << std::endl;
}