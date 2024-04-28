/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:02:34 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/29 00:47:17 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int *arr = parse_argv(argc, argv);
		std::vector<int> vect(arr, arr + argc);
		std::deque<int> deq(arr, arr + argc);
		
		for (std::vector<int>::iterator it = vect.begin(); it <= vect.end() - 1; it++)
			std::cout << *it << " ";
			std::cout << std::endl;
		for (std::deque<int>::iterator it = deq.begin(); it <= deq.end() - 1; it++)
			std::cout<< *it << " ";
			std::cout << std::endl;
		sort_vect(vect);
			std::cout << std::endl;
		for (std::vector<int>::iterator it = vect.begin(); it <= vect.end() - 1; it++)
			std::cout << *it << std::endl;
		
			std::cout << std::endl;
	}
}
