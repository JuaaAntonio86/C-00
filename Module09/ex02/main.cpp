/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:02:34 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/26 18:22:04 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>	

void merge(std::vector<int>& leftvec, std::vector<int>& rightvect, std::vector<int>& vect)
{
	// std::vector<int>::iterator leftsize = vect.begin() + vect.size() / 2;
	// std::vector<int>::iterator rightsize = leftsize + 1;
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


void sort(std::vector<int>& vect){
	if (vect.size() <= 1)
		return;
	std::vector<int> leftarr(vect.begin(), vect.begin() + vect.size() / 2);
    std::vector<int> rightarr(vect.begin() + vect.size() / 2, vect.end());
	
	sort(leftarr);
	sort(rightarr);
	merge(leftarr,rightarr,vect);
}

int main(void)
{
	int arr[] = {5,6,7,9,4,3,1,2,8};
	std::vector<int> vect(arr, arr + sizeof(arr) / sizeof(int));
	
	for (std::vector<int>::iterator it = vect.begin(); it <= vect.end() - 1; it++)
		std::cout << *it << std::endl;
	sort(vect);
		std::cout << std::endl;
	for (std::vector<int>::iterator it = vect.begin(); it <= vect.end() - 1; it++)
		std::cout << *it << std::endl;
	
}