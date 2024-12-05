/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fncs.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:41:17 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/05 19:41:33 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FNCS_HPP
# define FNCS_HPP
# include <iostream>

template <class T>

void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template <class T>

T min(T a, T b) {
	if (a > b)
		return (b);
	else if (a < b)
		return (a);
	return (b);
}

template <class T>

T max(T a, T b) {
	if (a > b)
		return (a);
	else if (a < b)
		return (b);
	return (b);
}

#endif