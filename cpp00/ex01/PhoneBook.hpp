/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:29:31 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/24 19:55:10 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts_[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void			addContact(void);
		void			searchContact(void);
		void			displayMenu(void);
		void			displayContacts(void);
		void			displayContact(Contact contact);
		void			formatContacts(Contact contact);
		void			fixMsg(std::string msg);
		void			createContact(int i);
		int				check_index(std::string input);
};

#endif