/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:07:35 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/24 20:15:59 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "\n\nExiting PhoneBook!" << std::endl;
	return ;
}

void	PhoneBook::addContact(void)
{
	int			i;
	static int	max;
	
	i = max % 8;
	this->contacts_[i].add(i);
	max++;
}

void	PhoneBook::displayMenu(void)
{
	std::cout << "Type ADD to add a new contact" << std::endl;
	std::cout << "Type SEARCH to look up a contact" << std::endl;
	std::cout << "Type EXIT to exit the PhoneBook\n" << std::endl;
}


void	PhoneBook::searchContact(void)
{
	int					index;
	std::string			s_index;
	
	if (this->contacts_[0].getId() == -1)
	{
		std::cout << RED << "There's nothing to see here, type ADD to add a new contact!\n" << CLEAR << std::endl;
		return ;
	}
	displayContacts();
	std::cout << "Choose an index -> ";
	std::getline(std::cin, s_index);
	while (s_index.empty() || check_index(s_index))
	{
		if (!std::cin.eof())
			std::cout << RED "Enter a valid index -> " << CLEAR;
		std::getline(std::cin, s_index);
		if (std::cin.eof())
			return ;
	}
	index = std::atoi(s_index.c_str());
	std::cout << "\n";
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

int	PhoneBook::check_index(std::string input)
{
	int	i;

	i = -1;
	while (input[++i])
	{
		if (isalpha(input[i]))
			return (1);
	}
	return (0);
}