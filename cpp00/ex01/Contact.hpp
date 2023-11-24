/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:07:42 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/24 20:02:28 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#define RED "\033[91;1m"
#define BLUE "\033[94;1m"
#define GREEN "\033[92;1m"
#define CLEAR "\033[0m"
#include <iostream>
#include <limits>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <sstream>
#include <cctype>

class Contact
{
	private:
		int			id_;
		std::string	phone_number_;
		std::string	first_name_;
		std::string	last_name_;
		std::string	nickname_;
		std::string	darkest_secret_;
	public:
		Contact(void);
		~Contact(void);
		void		add(int id);
		int			getId(void);
		std::string		getPhoneNumber(void);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getDarkestSecret(void);
		std::string	check_input(std::string input);
};

#endif