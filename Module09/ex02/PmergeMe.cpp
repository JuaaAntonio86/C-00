/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:02:37 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/29 23:39:13 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <new>
#include <stdio.h>
#include <stdlib.h>
#include <exception>

bool isInteger(const std::string& s) {
	char* endPtr;
	
	std::strtol(s.c_str(), &endPtr, 10);
	return *endPtr == '\0' || s.empty();
}

int* parse_argv(int argc, char **argv){
	int*	arr;
	bool	flag = 0;

	try{
		arr = new int[argc - 1];
	}
	catch(const std::bad_alloc& e){
		std::cerr << "Allocation failed: " << e.what() << std::endl;
        throw;
	}
	for(int i = 1; i < argc; ++i)
	{
		std::string arg = argv[i];
		if((flag = isInteger(argv[i])))
			arr[i - 1] = std::strtol(arg.c_str(), NULL, 10);
		if (!flag || arr[i - 1] > INT_MAX || arr[i - 1] < 0) {
			delete []arr;
			throw std::invalid_argument("Invalid input");
		}
	}
	return arr;
}

void merge_vect(std::vector<int>& leftvec, std::vector<int>& rightvect, std::vector<int>& vect)
{
	std::vector<int>::iterator it = vect.begin();
	std::vector<int>::iterator rit = rightvect.begin();
	std::vector<int>::iterator lit = leftvec.begin();

	while (lit != leftvec.end() && rit != rightvect.end())
	{
        if (*lit < *rit) {
            *it = *lit;
            ++lit;
        } else {
            *it = *rit;
            ++rit;
        }
        ++it;
    }
    while (lit != leftvec.end()) {
        *it = *lit;
        ++lit;
        ++it;
    }
    while (rit != rightvect.end()) {
        *it = *rit;
        ++rit;
        ++it;
    }
}

void sort_vect(std::vector<int>& vect){
	if (vect.size() <= 1)
		return;
	if (vect.size() <= 8) { // Threshold for insertion sort
		insertion_sort_vect(vect);
		return;
    }
	std::vector<int> leftarr(vect.begin(), vect.begin() + vect.size() / 2);
    std::vector<int> rightarr(vect.begin() + vect.size() / 2, vect.end());
	
	sort_vect(leftarr);
	sort_vect(rightarr);
	merge_vect(leftarr,rightarr,vect);
}

void insertion_sort_vect(std::vector<int>& vec) {
    for (size_t i = 1; i < vec.size(); ++i) {
        int key = vec[i];
        size_t j = i;
        while (j > 0 && vec[j - 1] > key) {
            vec[j] = vec[j - 1];
            --j;
        }
        vec[j] = key;
    }
}

void insertion_sort_deq(std::deque<int>& deq) {
    for (std::deque<int>::iterator it = deq.begin() + 1; it != deq.end(); ++it) {
        int key = *it;
        std::deque<int>::iterator jt = it;
        while (jt != deq.begin() && *(jt - 1) > key) {
            *jt = *(jt - 1);
            --jt;
        }
        *jt = key;
    }
}

void	sort_deq(std::deque<int>& deq){
	if (deq.size() <= 1)
		return;
	if (deq.size() <= 8) { // Threshold for insertion sort
        insertion_sort_deq(deq);
        return;
    }
	std::deque<int> leftarr(deq.begin(), deq.begin() + deq.size() / 2);
    std::deque<int> rightarr(deq.begin() + deq.size() / 2, deq.end());
	
	sort_deq(leftarr);
	sort_deq(rightarr);
	merge_deq(leftarr,rightarr,deq);
}

void	merge_deq(std::deque<int>& leftdeq, std::deque<int>& rightdeq, std::deque<int>& deq){
	std::deque<int>::iterator it = deq.begin();
	std::deque<int>::iterator rit = rightdeq.begin();
	std::deque<int>::iterator lit = leftdeq.begin();

	while (lit != leftdeq.end() && rit != rightdeq.end())
	{
        if (*lit < *rit) {
            *it = *lit;
            ++lit;
        } else {
            *it = *rit;
            ++rit;
        }
        ++it;
    }
    while (lit != leftdeq.end()) {
        *it = *lit;
        ++lit;
        ++it;
    }
    while (rit != rightdeq.end()) {
        *it = *rit;
        ++rit;
        ++it;
    }
}
