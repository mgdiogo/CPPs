/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:55:18 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/19 21:51:10 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "Default constructor called" << std::endl;
	this->Name = "Bob";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_dmg = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Constructor called " << "[" << name << "]" << std::endl;
	this->Name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_dmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) {
	std::cout << "Copy constructor called" << std::endl;
	this->Name = cpy.Name;
	this->hit_points = cpy.hit_points;
	this->energy_points = cpy.energy_points;
	this->attack_dmg = cpy.attack_dmg;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &cpy) {
	if (this != &cpy)
	{
		this->Name = cpy.Name;
		this->hit_points = cpy.hit_points;
		this->energy_points = cpy.energy_points;
		this->attack_dmg = cpy.attack_dmg;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " 
			<< this->attack_dmg << " points of damage" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->Name << " took " << amount << " points of damage " << std::endl;
		if (amount >= (unsigned int)this->hit_points)
			std::cout << this->Name << " died!" << std::endl;
		this->hit_points -= amount;
		this->energy_points -= 1;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		this->hit_points += amount;
		std::cout << "ClapTrap " << this->Name << " repaired " << amount << ", points of health and has now " 
		<< this->hit_points << " hit points" << std::endl;
		this->energy_points -= 1;
	}
}