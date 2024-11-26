/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:20:10 by mpedroso          #+#    #+#             */
/*   Updated: 2024/11/26 15:55:55 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <class T>

class Array {
	private:
		T *arr;
		int _size;
	public:
		
		Array();
		Array(unsigned int n);
		Array(const Array &cpy);
		Array& operator=(const Array &cpy);
		~Array();
		int size(void) const;
};

template <class T>

Array<T>::Array() {
	this-> arr = nullptr;
	_size = 0;
}

template <class T>

Array<T>::Array(unsigned int n) {
	_size = n;
	arr = new T[_size];
	for (unsigned int i = 0; i < n; ++i) {
		arr[i] = T();
	}
}

template <class T>

Array<T>::~Array() {
	delete[] arr;
}

template <class T>

int Array<T>::size(void) const {
	return (_size);
} 

#endif