/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:40:32 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/10 19:55:44 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		this->inv[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &cpy) {
	for (int i = 0; i < 4; i++)
	{
		if (cpy.inv[i])
			this->inv[i] = cpy.inv[i]->clone();
		else
			this->inv[i] = NULL;
	}
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4 && this->inv[i]; i++)
		delete this->inv[i];
	std::cout << "MateriaSource destroyed" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &cpy) {
	if (this != &cpy)
	{
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
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++)
	{
		if (!this->inv[i])
		{
			this->inv[i] = m;
			return ;
		}
	}
	std::cout << "Cannot learn materia, inventory full" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++)
	{
		if (type == this->inv[i]->getType())
			return (this->inv[i]->clone());
	}
	std::cout << "Failed to create Materia, type not found!" << std::endl;
	return (NULL);
}