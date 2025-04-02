/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:51:23 by mpedroso          #+#    #+#             */
/*   Updated: 2025/04/02 12:50:11 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_CPP
# include <iostream>
# include <iomanip>
# include <fstream>
# include <sstream>
# include <map>

class BitcoinExchange {
	private:
		std::map<std::string, float> _exchange;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &cpy);
		BitcoinExchange& operator=(const BitcoinExchange &cpy);
		~BitcoinExchange();
		int checkDate(const std::string &date);
		void parseFile(std::ifstream &fileName);
		void processValue(std::string date, float value);
		std::string trim(const std::string &str);
};

#endif