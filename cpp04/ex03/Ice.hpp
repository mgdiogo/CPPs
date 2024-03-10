/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:39:57 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/10 17:34:18 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(const Ice &cpy);
		virtual ~Ice(void);
		Ice& operator=(const Ice &cpy);
		AMateria *clone() const;
		void use(ICharacter &target);
};