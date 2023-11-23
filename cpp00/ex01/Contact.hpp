/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:07:42 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/23 23:32:01 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#define RED "\033[91;1m"
#define BLUE "\033[94;1m"
#define GREEN "\033[92;1m"
#include <iostream>

class Contact
{
	private:
		int	id_;
		int	phone_number_;
		std::string first_name_;
		std::string	last_name_;
		std::string	nickname_;
		std::string	darkest_secret_;
	public:
		Contact(void);
		Contact(int id, int phone_n, std::string f_name, std::string l_name, std::string nickname, std::string darkest_s);
		int	getId(void);
		int	getPhoneNumber(void);
		std::string getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string getDarkestSecret(void);
};

#endif