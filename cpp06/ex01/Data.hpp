/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:13:04 by mpedroso          #+#    #+#             */
/*   Updated: 2024/11/25 18:08:07 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP
# include <iostream>

class Data {
	private:
		int _data_int;
	public:
		Data();
		Data(const Data &cpy);
		Data& operator=(const Data &cpy);
		~Data();
};

#endif