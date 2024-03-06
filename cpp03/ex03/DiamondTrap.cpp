/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:49:45 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/20 11:19:44 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Undefined_clap_name"), ScavTrap("Undefined_clap_name"), FragTrap("Undefined_clap_name"){
	this->Name = "Undefined";
	FragTrap::hit_points = 100;
	ScavTrap::energy_points = 50;
	FragTrap::attack_dmg = 30;
	std::cout << "DiamondTrap default constructor called with the name [" << this->Name << "]" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	this->Name = name;
	FragTrap::hit_points = 100;
	ScavTrap::energy_points = 50;
	FragTrap::attack_dmg = 30;
	std::cout << "DiamondTrap constructor was called with the name [" << this->Name << "]" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : ClapTrap (), ScavTrap(), FragTrap(){
	std::cout << "DiamondTrap copy constructor was called with the name [" << cpy.Name << "]" << std::endl;
	this->Name = cpy.Name;
	this->hit_points = cpy.hit_points;
	this->energy_points = cpy.energy_points;
	this->attack_dmg = cpy.attack_dmg;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &cpy) {
	if (this != &cpy)
	{
		this->Name = cpy.Name;
		ClapTrap::Name = cpy.Name + "_clap_name";
		this->hit_points = cpy.hit_points;
		this->energy_points = cpy.energy_points;
		this->attack_dmg = cpy.attack_dmg;
	}
	std::cout << "DiamondTrap name is now [" << this->Name << "]" << " with the ClapTrap name [" << ClapTrap::Name << "]" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor was called with the name [" << this->Name << "]" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap: this is " << this->Name << " and my ClapTrap name is " << ClapTrap::Name << std::endl;
}