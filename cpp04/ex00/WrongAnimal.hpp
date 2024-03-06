/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:50:41 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/05 13:02:21 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal {
	protected:
		std::string _type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &cpy);
		WrongAnimal& operator=(const WrongAnimal &cpy);
		virtual ~WrongAnimal(void);
		virtual void makeSound(void) const;
		std::string getType(void) const;
};