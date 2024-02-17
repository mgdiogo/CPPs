/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:27:41 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/17 18:06:32 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int fixed_point;
		static const int fixed_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &cpy);
		Fixed& operator=(const Fixed &cpy);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif