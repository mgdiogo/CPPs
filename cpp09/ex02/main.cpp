/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:44:04 by mpedroso          #+#    #+#             */
/*   Updated: 2025/04/01 23:03:55 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void isDuplicate(std::vector<int> &vec) {
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        for (std::vector<int>::iterator it2 = it + 1; it2 != vec.end(); ++it2) {
            if (*it == *it2) {
                throw std::invalid_argument("Error: duplicate numbers.");
            }
        }
    }
}

bool isSorted(std::vector<int> &vec) {
    std::vector<int>::iterator it = vec.begin();
    std::vector<int>::iterator next = it;

    ++next;
    while (next != vec.end()) {
        if (*next < *it)
            return false;
        ++it;
        ++next;
    }
    return true;
}

int main(int argc, char **argv) {
	if (argc > 2) {
		try {
			PmergeMe pmerge;
			std::vector<char *> args;
			for (int i = 1; i < argc; i++)
				args.push_back(argv[i]);
			std::vector<char *>::iterator it = args.begin();
			for (; it != args.end(); ++it) {
				int n;
				if (!isdigit(*(*it)))
					throw std::invalid_argument("Error: sequence can only contain numbers (negative numbers not allowed)");
				n = std::atoi(*it);
				pmerge.addToSeq(n);
			}
			isDuplicate(pmerge.getVecSeq());
			if (isSorted(pmerge.getVecSeq()))
				throw std::invalid_argument("Error: sequence is already sorted");
			pmerge.printVecBefore();
			pmerge.printDequeBefore();
			std::clock_t start_v = std::clock();
			pmerge.mergeSort(pmerge.getVecSeq());
			std::clock_t end_v = std::clock();
			double elapsed_v = static_cast<double>(end_v - start_v) / CLOCKS_PER_SEC * 1000000;
			std::clock_t start_d = std::clock();
			pmerge.mergeSort(pmerge.getDequeSeq());
			std::clock_t end_d = std::clock();
			double elapsed_d = static_cast<double>(end_d - start_d) / CLOCKS_PER_SEC * 1000000;
			std::cout << std::endl;
			pmerge.printVecAfter();
			pmerge.printDequeAfter();
			std::cout << "\nTime to process range of " << pmerge.getVecSeq().size() << " elements with std::vector -> " << elapsed_v << " us";
			std::cout << "\nTime to process range of " << pmerge.getDequeSeq().size() << " elements with std::deque -> " << elapsed_d << " us" << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "Usage -> ./PmergeMe <sequence>" << std::endl;
	return (0);
}