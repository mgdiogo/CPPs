/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:40:47 by mpedroso          #+#    #+#             */
/*   Updated: 2025/04/01 22:51:21 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <vector>
# include <deque>
# include <ctime>
# include <cstdlib>
# include <algorithm>

class PmergeMe {
	private:
		std::vector<int> _vecSeq;
		std::deque<int> _dequeSeq;
		PmergeMe(const PmergeMe &cpy);
		PmergeMe& operator=(const PmergeMe &cpy);
	public:
		PmergeMe();
		~PmergeMe();
		void addToSeq(int n);
		void printVecBefore(void);
		void printDequeBefore(void);
		void printVecAfter(void);
		void printDequeAfter(void);
		std::vector<int>& getVecSeq(void);
		std::deque<int>& getDequeSeq(void);
		void mergeSort(std::vector<int> &vec);
		void mergeSort(std::deque<int> &deque);
		std::vector<int> generateJacobsthalVec(int n);
		std::deque<int> generateJacobsthalDeque(int n);
		void jacobsthalInsert(std::vector<int>& vec, std::vector<int>& pend);
		void jacobsthalInsert(std::deque<int>& vec, std::deque<int>& pend);
		size_t binarySearch(const std::deque<int>& vec, int value, size_t low, size_t high);
		size_t binarySearch(const std::vector<int>& vec, int value, size_t low, size_t high);
};

#endif