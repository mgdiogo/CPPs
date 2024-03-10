/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:10:06 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/10 19:49:10 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria{
	protected:
		std::string type;
	public:
		AMateria(void);
		AMateria(const std::string &type);
		AMateria(const AMateria &cpy);
		virtual ~AMateria(void);
		AMateria &operator=(const AMateria &cpy);
		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};