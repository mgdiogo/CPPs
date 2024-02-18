/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:27:41 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/18 19:00:19 by mpedroso         ###   ########.fr       */
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
		static Fixed& min(Fixed& fix1, Fixed& fix2);
		static const Fixed& min(const Fixed& fix1, const Fixed& fix2);
		static Fixed& max(Fixed& fix1, Fixed& fix2);
		static const Fixed& max(const Fixed& fix1, const Fixed& fix2);

		// comparison operators

		bool operator==(const Fixed& fixed) const;
		bool operator!=(const Fixed& fixed) const;
		bool operator>(const Fixed& fixed) const;
		bool operator<(const Fixed& fixed) const;
		bool operator>=(const Fixed& fixed) const;
		bool operator<=(const Fixed& fixed) const;

		// arithmetic operators

		Fixed operator+(const Fixed& fixed);
		Fixed operator-(const Fixed& fixed);
		Fixed operator*(const Fixed& fixed);
		Fixed operator/(const Fixed& fixed);

		// increment/decrement operators

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

};
		std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);
		
#endif