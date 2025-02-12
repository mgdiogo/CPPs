/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:51:23 by mpedroso          #+#    #+#             */
/*   Updated: 2025/02/12 17:15:10 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_CPP
# include <iostream>
# include <fstream>
# include <sstream>
# include <map>

class BitcoinExchange {
	private:
		std::map<std::string, float> lela;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &cpy);
		BitcoinExchange& operator=(const BitcoinExchange &cpy);
		~BitcoinExchange();
		void parseFile(std::ifstream &fileName);
		int checkDate(const std::string &date);
};

#endif