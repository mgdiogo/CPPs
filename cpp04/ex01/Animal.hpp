/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:07:55 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/06 18:43:06 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include <iostream>

class Animal {
	protected:
		std::string _type;
	public:
		Animal(void);
		Animal(const Animal &cpy);
		Animal& operator=(const Animal &cpy);
		virtual ~Animal(void);
		virtual void makeSound(void) const;
		std::string getType(void) const;
		virtual Brain* getBrainAddr(void) const = 0;
};