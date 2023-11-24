/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:07:35 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/24 14:23:46 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::addContact(void)
{
	int			i;
	static int	max;
	Contact	contact;

	i = max % 8;
	contact = createContact(i);
	this->contacts_[i] = contact;
	std::cout << GREEN << "Contact added successfully!\n" << CLEAR << std::endl;
	max++;
}

void	PhoneBook::displayMenu(void)
{
	std::cout << "Type ADD to add a new contact" << std::endl;
	std::cout << "Type SEARCH to look up a contact" << std::endl;
	std::cout << "Type EXIT to exit the PhoneBook\n" << std::endl;
}

Contact	PhoneBook::createContact(int i)
{
	long		phone_number;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	darkest_secret;

	std::cout << BLUE << "Adding a new contact!\n" << CLEAR << std::endl;
	std::cin.ignore();
	std::cout << "Enter your first name -> ";
	std::getline(std::cin, first_name);
	std::cout << "Enter your last name -> ";
	std::getline(std::cin, last_name);
	std::cout << "Enter your nickname -> ";
	std::getline(std::cin, nickname);
	std::cout << "Enter your darkest secret -> ";
	std::getline(std::cin, darkest_secret);
	std::cout << "Enter your phone number -> ";
	std::cin >> phone_number;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << BLUE << "Enter a valid phone number -> " << CLEAR;
		std::cin >> phone_number;
	}
	std::cout << "\n";
	Contact contact(i, phone_number, first_name, last_name, nickname, darkest_secret);
	return (contact);
}

void	PhoneBook::searchContact(void)
{
	int	index;
	
	if (this->contacts_[0].getId() == -1)
	{
		std::cout << RED << "There's nothing to see here, type ADD to add a new contact!\n" << CLEAR << std::endl;
		return ;
	}
	displayContacts();
	std::cout << "Choose an index -> ";
	std::cin >> index;
	std::cout << "\n";
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << RED << "Enter a valid index -> " << CLEAR;
		std::cin >> index;
	}
	if (index > 7 || index < 0)
	{
		std::cout << RED << "Index out of bounds!\n"<< CLEAR << std::endl;
		searchContact();
	}
	else if (this->contacts_[index].getId() == -1)
	{
		std::cout << RED << "There is no contact saved on this index!\n" << CLEAR << std::endl;
		searchContact();
	}
	else
		displayContact(this->contacts_[index]);
}

void	PhoneBook::displayContacts(void)
{
	int	i;

	i = -1;
	std::cout << BLUE << std::setw(10) << "Index"
			  << " | "
			  << std::setw(10) << "First Name"
			  << " | "
			  << std::setw(10) << "Last Name"
			  << " | "
			  << std::setw(10) << "Nickname"
			  << " | "
			  << CLEAR << std::endl;
	while (++i < 8)
	{
		if (this->contacts_[i].getId() != -1)
			formatContacts(this->contacts_[i]);
	}
	std::cout << "\n";
}

void	PhoneBook::formatContacts(Contact contact)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;

	first_name = contact.getFirstName().substr(0, 10);
	last_name = contact.getLastName().substr(0, 10);
	nickname = contact.getNickname().substr(0, 10);

	std::cout << std::setw(10) << contact.getId() << " | ";
	if (first_name.size() >= 10)
		fixMsg(first_name);
	else
		std::cout << std::setw(10) << first_name << " | ";
	if (last_name.size() >= 10)
		fixMsg(last_name);
	else
		std::cout << std::setw(10) << last_name << " | ";
	if (nickname.size() >= 10)
		fixMsg(nickname);
	else
		std::cout << std::setw(10) << nickname << " | ";
	std::cout << "\n";
}

void	PhoneBook::fixMsg(std::string msg)
{
	int	i;
	
	i = -1;
	while (++i < 9)
		std::cout << msg[i];
	std::cout << ". | ";
}

void	PhoneBook::displayContact(Contact contact)
{
	std::cout << BLUE << "Index [" << contact.getId()  << "]\n" << CLEAR
			  << "\nFirst name: " << contact.getFirstName()
			  << "\nLast name: " << contact.getLastName()
			  << "\nNickname: " << contact.getNickname()
			  << "\nDarkest secret: " << contact.getDarkestSecret()
			  << "\nPhone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "\n";
}
