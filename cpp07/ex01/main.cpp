/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:52:35 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/05 19:40:36 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int &n) {
	n++;
}

int main(void) {
	int arr[5] = {0, 1, 2, 3 ,4};

	iter(arr, 5, increment);
	for (int i = 0; i < 5; ++i)
		std::cout << arr[i] << std::endl;
	return (0);
}