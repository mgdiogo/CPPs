/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:51:48 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/06 22:26:35 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->complaints[0].level = "DEBUG";
	this->complaints[0].function = &Harl::debug;
	this->complaints[1].level = "INFO";
	this->complaints[1].function = &Harl::info;
	this->complaints[2].level = "WARNING";
	this->complaints[2].function = &Harl::warning;
	this->complaints[3].level = "ERROR";
	this->complaints[3].function = &Harl::error;
}

Harl::~Harl(void)
{
	std::cout << "\nHarl exiting\n";
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enought bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
	{
		std::cout << " [ Probably complaining about insignificant problems ]\n";
		return ;
	}
	switch (level[0]) 
	{
		case 'D':
			std::cout << "[ DEBUG ]\n";
			(this->*complaints[0].function)();
			std::cout << "\n[ INFO ]\n";
			(this->*complaints[1].function)();
			std::cout << "\n[ WARNING ]\n";
			(this->*complaints[2].function)();
			std::cout << "\n[ ERROR ]\n";
			(this->*complaints[3].function)();
			break ;
		case 'I':
			std::cout << "[ INFO ]\n";
			(this->*complaints[1].function)();
			std::cout << "\n[ WARNING ]\n";
			(this->*complaints[2].function)();
			std::cout << "\n[ ERROR ]\n";
			(this->*complaints[3].function)();
			break ;
		case 'W':
			std::cout << "[ WARNING ]\n";
			(this->*complaints[2].function)();
			std::cout << "\n[ ERROR ]\n";
			(this->*complaints[3].function)();
			break ;
		case 'E':
			std::cout << "[ ERROR ]\n";
			(this->*complaints[3].function)();
			break ;
	}
}