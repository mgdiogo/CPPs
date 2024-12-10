/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:39:51 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/10 18:38:50 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <deque>

template <class T, class C = std::deque<T> >

class MutantStack : public std::stack<T, C> {
	public:
		MutantStack();
		MutantStack(const MutantStack &cpy);
		T& operator=(const MutantStack &cpy);
		~MutantStack();
		typedef typename C::iterator iterator;
		iterator begin(void);
		iterator end(void);
};

template <class T, class C>

MutantStack<T, C>::MutantStack() : std::stack<T, C>() {}

template <class T, class C>

MutantStack<T, C>::MutantStack(const MutantStack &cpy) : std::stack<T, C> (cpy) {}

template <class T, class C>

T& MutantStack<T, C>::operator=(const MutantStack &cpy) {
	if (this != &cpy) {
		std::stack<T, C>::operator = (cpy);
	}
	return (*this);
}

template <class T, class C>

MutantStack<T, C>::~MutantStack() {}

template <class T, class C>

typename C::iterator MutantStack<T, C>::begin(void) {
	return (std::stack<T, C>::c.begin());
}

template <class T, class C>

typename C::iterator MutantStack<T, C>::end(void) {
	return (std::stack<T, C>::c.end());
}

#endif