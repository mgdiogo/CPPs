/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:07:48 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/24 11:46:35 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->id_ = -1;
	this->phone_number_ = 0;
	this->first_name_ = "";
	this->last_name_ = "";
	this->nickname_ = "";
	this->darkest_secret_ = "";
}

Contact::Contact(int id, long phone_n, std::string f_name, std::string l_name, std::string nickname, std::string darkest_s)
{
	this->id_ = id;
	this->phone_number_ = phone_n;
	this->first_name_ = f_name;
	this->last_name_ = l_name;
	this->nickname_ = nickname;
	this->darkest_secret_ = darkest_s;
}

int	Contact::getId(void)
{
	return this->id_;
}

long	Contact::getPhoneNumber(void)
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