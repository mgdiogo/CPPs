/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:45:57 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/06 18:17:03 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain* brain;
	public:
		Dog(void);
		Dog(const Dog &cpy);
		Dog& operator=(const Dog &cpy);
		~Dog(void);
		void makeSound(void) const;
		Brain* getBrainAddr(void) const;
};