/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:45:57 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/05 12:46:25 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(const Dog &cpy);
		Dog& operator=(const Dog &cpy);
		~Dog(void);
		void makeSound(void) const;
};