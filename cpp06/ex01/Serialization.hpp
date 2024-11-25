/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:01:59 by mpedroso          #+#    #+#             */
/*   Updated: 2024/11/25 18:14:24 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP
# include "Data.hpp"
# include <stdint.h>

class Serialization {
	public:
		Serialization();
		Serialization(const Serialization &cpy);
		Serialization& operator=(const Serialization &cpy);
		virtual ~Serialization() = 0;
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif