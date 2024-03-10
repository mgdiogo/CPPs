/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:35:12 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/10 19:23:50 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria *inv[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &cpy);
		virtual ~MateriaSource(void);
		MateriaSource& operator=(const MateriaSource &cpy);
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);
};