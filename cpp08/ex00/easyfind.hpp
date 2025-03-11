/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:17:28 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/05 20:12:06 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iostream>
# include <vector>

template <class T>

int	easyfind(T &container, int find) {
	typename T::iterator it = std::find(container.begin(), container.end(), find);
	if (it == container.end())
		throw std::runtime_error("Value not found");
	return (*it);
}

#endif