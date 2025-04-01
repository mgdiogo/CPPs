/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:42:59 by mpedroso          #+#    #+#             */
/*   Updated: 2025/04/01 23:03:06 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _vecSeq(0), _dequeSeq(0) {}

PmergeMe::~PmergeMe() {}

void PmergeMe::addToSeq(int n) {
	_vecSeq.push_back(n);
	_dequeSeq.push_back(n);
}

void PmergeMe::printVecBefore() {
	std::vector<int>::iterator it = _vecSeq.begin();
	std::cout << "Vector sequence before sort -> ";
	for(; it != _vecSeq.end(); it++)
		std::cout << "[" << *it << "] ";
	std::cout << std::endl;	
}

void PmergeMe::printDequeBefore() {
	std::deque<int>::iterator it = _dequeSeq.begin();
	std::cout << "Deque sequence before sort -> ";
	for(; it != _dequeSeq.end(); it++)
		std::cout << "[" << *it << "] ";
	std::cout << std::endl;	
}

void PmergeMe::printVecAfter() {
	std::vector<int>::iterator it = _vecSeq.begin();
	std::cout << "Vector sequence after sort -> ";
	for(; it != _vecSeq.end(); it++)
		std::cout << "[" << *it << "] ";
	std::cout << std::endl;	
}

void PmergeMe::printDequeAfter() {
	std::deque<int>::iterator it = _dequeSeq.begin();
	std::cout << "Deque sequence after sort -> ";
	for(; it != _dequeSeq.end(); it++)
		std::cout << "[" << *it << "] ";
	std::cout << std::endl;	
}

std::vector<int>& PmergeMe::getVecSeq() { return (_vecSeq); }

std::deque<int>& PmergeMe::getDequeSeq() { return (_dequeSeq); }

// vector mergeSort

void PmergeMe::mergeSort(std::vector<int> &vec) {
	std::vector<int> main;
    std::vector<int> pend;
	
    for (size_t i = 0; i + 1 < vec.size(); i += 2) {
        if (vec[i] > vec[i+1])
            std::swap(vec[i], vec[i+1]);
    }
	for (size_t i = 0; i < vec.size(); i += 2) {
        main.push_back(vec[i]);
        if (i + 1 < vec.size())
            pend.push_back(vec[i+1]);
    }
	if (main.size() > 1)
		mergeSort(main);
	jacobsthalInsert(main, pend);
	
    vec = main;
}

std::vector<int> PmergeMe::generateJacobsthalVec(int n) {
    std::vector<int> jacob;
	
    if (n >= 1) 
		jacob.push_back(0);
    if (n >= 2) 
		jacob.push_back(1);
    for (int i = 2; i < n; ++i) {
        int next = jacob[i-1] + 2 * jacob[i-2];
        jacob.push_back(next);
    }
    return jacob;
}

size_t PmergeMe::binarySearch(const std::vector<int>& vec, int value, size_t low, size_t high) {
    while (low < high) {
        size_t mid = low + (high - low) / 2;
        if (value < vec[mid])
            high = mid;
		else 
            low = mid + 1;
    }
    return low;
}

void PmergeMe::jacobsthalInsert(std::vector<int>& vec, std::vector<int>& pend) {
    std::vector<int> jacob = generateJacobsthalVec(pend.size() + 2);
    std::vector<bool> inserted(pend.size(), false);

    for (size_t i = 0; i < jacob.size(); ++i) {
        size_t j = jacob[i];
        if (j >= pend.size() || inserted[j]) 
			continue;
        size_t pos = binarySearch(vec, pend[j], 0, vec.size());
        vec.insert(vec.begin() + pos, pend[j]);
        inserted[j] = true;
    }

    for (size_t j = 0; j < pend.size(); ++j) {
        if (!inserted[j]) {
            size_t pos = binarySearch(vec, pend[j], 0, vec.size());
            vec.insert(vec.begin() + pos, pend[j]);
        }
    }
}

// deque mergeSort

void PmergeMe::mergeSort(std::deque<int> &vec) {
	std::deque<int> main;
    std::deque<int> pend;
	
    for (size_t i = 0; i + 1 < vec.size(); i += 2) {
        if (vec[i] > vec[i+1])
            std::swap(vec[i], vec[i+1]);
    }
	for (size_t i = 0; i < vec.size(); i += 2) {
        main.push_back(vec[i]);
        if (i + 1 < vec.size())
            pend.push_back(vec[i+1]);
    }
	if (main.size() > 1)
		mergeSort(main);
	jacobsthalInsert(main, pend);
	
    vec = main;
}

std::deque<int> PmergeMe::generateJacobsthalDeque(int n) {
    std::deque<int> jacob;
	
    if (n >= 1) 
		jacob.push_back(0);
    if (n >= 2) 
		jacob.push_back(1);
    for (int i = 2; i < n; ++i) {
        int next = jacob[i-1] + 2 * jacob[i-2];
        jacob.push_back(next);
    }
    return jacob;
}

size_t PmergeMe::binarySearch(const std::deque<int>& vec, int value, size_t low, size_t high) {
    while (low < high) {
        size_t mid = low + (high - low) / 2;
        if (value < vec[mid])
            high = mid;
		else 
            low = mid + 1;
    }
    return low;
}

void PmergeMe::jacobsthalInsert(std::deque<int>& vec, std::deque<int>& pend) {
    std::deque<int> jacob = generateJacobsthalDeque(pend.size() + 2);
    std::deque<bool> inserted(pend.size(), false);

    for (size_t i = 0; i < jacob.size(); ++i) {
        size_t j = jacob[i];
        if (j >= pend.size() || inserted[j]) 
			continue;
        size_t pos = binarySearch(vec, pend[j], 0, vec.size());
        vec.insert(vec.begin() + pos, pend[j]);
        inserted[j] = true;
    }

    for (size_t j = 0; j < pend.size(); ++j) {
        if (!inserted[j]) {
            size_t pos = binarySearch(vec, pend[j], 0, vec.size());
            vec.insert(vec.begin() + pos, pend[j]);
        }
    }
}
