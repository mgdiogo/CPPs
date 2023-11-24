/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:07:48 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/24 18:29:40 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->id_ = -1;
	this->phone_number_ = "";
	this->first_name_ = "";
	this->last_name_ = "";
	this->nickname_ = "";
	this->darkest_secret_ = "";
}

Contact::~Contact(void)
{
	return	;
}

int	Contact::getId(void)
{
	return this->id_;
}

std::string	Contact::getPhoneNumber(void)
{
	return this->phone_number_;
}

std::string Contact::getFirstName(void)
{
	return this->first_name_;
}

std::string Contact::getLastName(void)
{
	return this->last_name_;
}

std::string Contact::getNickname(void)
{
	return this->nickname_;
}

std::string Contact::getDarkestSecret(void)
{
	return this->darkest_secret_;
}

void	Contact::add(int id)
{
	int	i;
	
	i = -1;
	this->id_ = id;
	std::cout << BLUE << "Adding a new contact!\n" << CLEAR << std::endl;
	std::cout << "Enter your first name -> ";
	std::getline(std::cin, this->first_name_);
	this->first_name_= check_input(this->first_name_);
	if (std::cin.eof())
		return;
	std::cout << "Enter your last name -> ";
	std::getline(std::cin, this->last_name_);
	this->last_name_= check_input(this->last_name_);
	if (std::cin.eof())
		return;
	std::cout << "Enter your nickname -> ";
	std::getline(std::cin, this->nickname_);
	this->nickname_= check_input(this->nickname_);
	if (std::cin.eof())
		return;
	std::cout << "Enter your darkest secret -> ";
	std::getline(std::cin, this->darkest_secret_);
	this->darkest_secret_= check_input(this->darkest_secret_);
	if (std::cin.eof())
		return;
	std::cout << "Enter your phone number -> ";
	std::getline(std::cin, this->phone_number_);
	this->phone_number_= check_input(this->phone_number_);
	if (std::cin.eof())
		return;
	while (this->phone_number_[++i])
	{
		if (!std::isdigit(this->phone_number_[i]))
		{
			i = -1;
			std::cout << RED << "Invalid phone number, use digits only -> " << CLEAR;
			std::getline(std::cin, this->phone_number_);
			if (std::cin.eof())
				return;
		}
	}
	std::cout << GREEN << "\nContact added successfully!\n" << CLEAR << std::endl;
}

std::string	Contact::check_input(std::string input)
{
	while(input.empty())
	{
		if (!std::cin.eof())
			std::cout << RED << "Parameter cannot be empty -> " << CLEAR;	
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ("");
	}
	return (input);
}