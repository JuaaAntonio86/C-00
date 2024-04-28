/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:02:37 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/29 00:42:22 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <stdio.h>
#include <stdlib.h>
int* parse_argv(int argc, char **argv){
	(void)argv;
	(void)argc;
	int *arr = (int*)malloc(sizeof(int) * 10);
	if (!arr)
		throw std::invalid_argument("Invalid input");
	for (int i = 0; i < 10; ++i)
		arr[i] = i;
	for (int i = 0; i < 10; ++i)
		std::cout << arr[i] << std::endl;
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
