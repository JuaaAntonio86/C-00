/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:02:34 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/29 23:40:06 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc > 2)
	{
		clock_t	t;
		std::cout << std::fixed; 
		try{
			int* arr = parse_argv(argc, argv);
			std::cout << "Before: ";
			for (int i = 0; i < argc - 1; ++i)
				std::cout << arr[i] << " ";
			std::cout << std::endl;


			/*////////////////////////////// VECTOR //////////////////////////////////////*/
			t = clock();
			std::vector<int> vect(arr, arr + (argc - 1));
			sort_vect(vect);
			t = clock() - t;
			std::cout << "After: ";
			for (std::vector<int>::iterator it = vect.begin(); it <= vect.end() - 1; it++)
				std::cout << *it << " ";
			std::cout << std::endl;

			std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : "
				<< static_cast<double>(t)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;

			/*//////////////////////////////////// DEQUE /////////////////////////////////*/
			t = clock();
			std::deque<int> deq(arr, arr + (argc - 1));
			sort_deq(deq);
			t = clock() - t;
			std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : "
				<< static_cast<double>(t)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
			delete []arr;
		}
		catch(const std::exception& e){
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "Invalid number of arguments => ./PmergeMe [number_sequence]" << std::endl;
	return (0);
}
