/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:20:10 by mpedroso          #+#    #+#             */
/*   Updated: 2024/11/28 18:58:26 by mpedroso         ###   ########.fr       */
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
		T& operator[](unsigned int i);
		T& operator=(const Array &cpy);
		~Array();
		unsigned int size(void) const;
		void setValues(void);
};

template <class T>

Array<T>::Array() {
	_size = 0;
	this-> arr = NULL;
}

template <class T>

Array<T>::Array(unsigned int n) {
	_size = n;
	arr = new T[_size];
	for (unsigned int i = 0; i < n; ++i)
		arr[i] = T();
}

template <class T>

Array<T>::Array(const Array &cpy) {
	_size = cpy.size();
	this->arr = NULL;
	if (cpy.arr) {
		arr = new T[cpy.size()];
		for (unsigned int i = 0; i < cpy.size(); ++i)
			this->arr[i] = cpy.arr[i];
	}
}

template <class T>

T& Array<T>::operator=(const Array &cpy) {
	if (this != &cpy) {
		_size = cpy.size();
		this->arr = NULL;
		if (cpy.arr) {
			arr = new T[cpy.size()];
			for (unsigned int i = 0; i < cpy.size(); ++i)
				this->arr[i] = cpy.arr[i];
		}
	}
	return (*this);
}

template <class T>

Array<T>::~Array() {
	delete[] arr;
}

template <class T>

void Array<T>::setValues(void) {
	for (unsigned int i = 0; i < size(); ++i) {
		std::cin >> this->arr[i];
	}
}

template <class T>

unsigned int Array<T>::size(void) const {
	return (_size);
} 

template <class T>

T& Array<T>::operator[](unsigned int i){
	if (i > size()) {
		throw std::out_of_range("Tried to access an invalid index inside the array!");
	}
	return (this->arr[i]);
}

#endif