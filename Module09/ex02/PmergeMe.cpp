/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:02:37 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/29 19:11:53 by juan-anm         ###   ########.fr       */
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
	std::vector<int> leftarr(vect.begin(), vect.begin() + vect.size() / 2);
    std::vector<int> rightarr(vect.begin() + vect.size() / 2, vect.end());
	
	sort_vect(leftarr);
	sort_vect(rightarr);
	merge_vect(leftarr,rightarr,vect);
}
