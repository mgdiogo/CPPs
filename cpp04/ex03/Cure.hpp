/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:12:39 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/10 17:34:13 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria {
	public:
		Cure(void);
		Cure(const Cure &cpy);
		virtual ~Cure(void);
		Cure& operator=(const Cure &cpy);
		AMateria *clone() const;
		void use(ICharacter &target);
};