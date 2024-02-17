/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:27:41 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/17 19:26:21 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <math.h>

class Fixed
{
	private:
		int fixed_point;
		static const int fixed_bits = 8;
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &cpy);
		Fixed& operator=(const Fixed &cpy);
		~Fixed(void);
		float toFloat(void) const;
		int	toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};
		std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);
		
#endif