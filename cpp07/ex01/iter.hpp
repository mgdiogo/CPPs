/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:38:31 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/05 19:39:58 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <class T>

void iter(T *ptr, size_t len, void (*f)(T&)) {
	for (size_t i = 0; i < len; ++i)
		f(ptr[i]);
}

template <class T>

void iter(T *ptr, size_t len, void (*f)(const T&)) {
 	for (size_t i = 0; i < len; ++i)
 		f(ptr[i]);
}

template <class T>

void print(T &x) {
	std::cout << x << std::endl;
}

#endif