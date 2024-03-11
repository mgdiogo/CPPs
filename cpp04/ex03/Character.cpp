/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:41:37 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/11 20:59:17 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	this->name = "default";
	for (int i = 0; i < 4; i++)
		this->inv[i] = NULL;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) {
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inv[i] = NULL;
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character &cpy) {
	this->name = cpy.name;
	for (int i = 0; i < 4; i++)
	{
		if (cpy.inv[i])
			this->inv[i] = cpy.inv[i]->clone();
		else
			this->inv[i] = NULL;
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character(void) {
	for (int i = 0; i < 4; i++)
	{
		if (this->inv[i])
			delete this->inv[i];
	}
	std::cout << "Character destroyed" << std::endl;
}

Character& Character::operator=(const Character &cpy) {
	if (this != &cpy)
	{
		this->name = cpy.name;
		for (int i = 0; i < 4; i++)
		{
			if (this->inv[i])
				delete this->inv[i];
			if (cpy.inv[i])
				this->inv[i] = cpy.inv[i]->clone();
			else
				this->inv[i] = NULL;
		}
	}
	std::cout << "Character assignment operator called" << std::endl;
	return (*this);
}

std::string const &Character::getName() const {
	return (this->name);
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
	{
		if (!this->inv[i])
		{
			this->inv[i] = m;
			return ;
		}
	}
	std::cout << "Could not equip, inventory full!" << std::endl;
}

void Character::unequip(int idx) {
	if (idx > 3 || idx < 0)
	{
		std::cout << "Could not unequip, invalid index -> " << idx << std::endl;
		return ;
	}
	if (!this->inv[idx])
	{
		std::cout << "There is nothing equipped in slot " << idx << std::endl;
		return ;
	}
	this->inv[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx > 3 || idx < 0)
	{
		std::cout << "Index out of bounds!" << std::endl;
		return ;
	}
	if (!this->inv[idx])
	{
		std::cout << "There is no materia in this index" << std::endl;
		return ;
	}
	this->inv[idx]->use(target);
}
