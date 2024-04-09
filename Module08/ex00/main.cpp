/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:45:42 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/10 00:10:06 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "easyfind.tpp"

int	main(void)
{
	std::vector<int>	vect;

	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);
	vect.push_back(4);
	vect.push_back(5);

	std::cout <<"Vector : " << std::endl;
	for (std::vector<int>::const_iterator it = vect.begin(); it != vect.end(); ++it)
    	std::cout << *it << std::endl;
	try{
		int search = 2;
		std::cout << "Integer to find: " << search << std::endl;
		easyfind(vect, search);
		std::cout << "Integer has been found!!"<<std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::deque<int>	dq;
	dq.push_back(897);
	dq.push_back(-323223);
	dq.push_back(0);
	std::cout << std::endl << "Deque : " << std::endl;
	for (std::deque<int>::const_iterator it = dq.begin(); it != dq.end(); ++it)
    	std::cout << *it << std::endl;
	try
	{
		int search = -323224;
		std::cout << "Integer to find: " << search << std::endl;
		easyfind(dq, search);
		std::cout << "Integer has been found!!"<<std::endl;
	}
	catch(const std::exception & e)
	{
		
		std::cerr << e.what() << std::endl;
	}
	std::map<int, int >	maps;

	maps[0] = 1456;
	maps[1] = 321456;
	maps[2] = 143542356;
	maps[3] = 1456666;
	maps[4] = 14;
	std::cout << std::endl << "Map : " << std::endl;
	for (std::map<int, int>::const_iterator it = maps.begin(); it != maps.end(); ++it) {
		std::cout << it->first << " => " << it->second << std::endl;
	}

	try
	{
		int search = -323224;
		std::cout << "Integer to find: " << search << std::endl;
		easyfind(maps, search);
		std::cout << "Integer has been found!!"<<std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		int search = 14;
		std::cout << "Integer to find: " << search << std::endl;
		easyfind(maps, search);
		std::cout << "Integer has been found!!"<<std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
