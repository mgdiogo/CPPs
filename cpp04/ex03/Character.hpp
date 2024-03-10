/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:27:58 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/10 17:41:27 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string name;
		AMateria *inv[4];
	public:
		Character(void);
		Character(std::string name);
		Character(const Character &cpy);
		virtual ~Character(void);
		Character& operator=(const Character &cpy);
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};