/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:27:05 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/19 22:51:24 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	this->Name = "Undefined";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_dmg = 30;
	std::cout << "FragTrap default constructor called with the name [" << this->Name << "]" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_dmg = 30;
	std::cout << "FragTrap constructor called with the name [" << this->Name << "]" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap (cpy.Name) {
	std::cout << "FragTrap copy constructor was called with the name [" << cpy.Name << "]" << std::endl;
	this->Name = cpy.Name;
	this->hit_points = cpy.hit_points;
	this->energy_points = cpy.energy_points;
	this->attack_dmg = cpy.attack_dmg;
}

FragTrap& FragTrap::operator=(const FragTrap &cpy) {
	if (this != &cpy)
	{
		this->Name = cpy.Name;
		this->hit_points = cpy.hit_points;
		this->energy_points = cpy.energy_points;
		this->attack_dmg = cpy.attack_dmg;
	}

	std::cout << "FragTrap name is now [" << this->Name << "]" << std::endl;

	return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor was called with the name [" << this->Name << "]" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "FragTrap [" << this->Name << "] attacks " << target << ", causing " 
			<< this->attack_dmg << " points of damage" << std::endl;
	}
}

void FragTrap::highFiveGuys(void) {
	if (this->hit_points > 0)
		std::cout << "FragTrap [" << this->Name << "] is requesting an high five!" << std::endl;
}