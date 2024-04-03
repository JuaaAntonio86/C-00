/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:32:46 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/03 23:32:34 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int			int_array[5] = {1, 2, 3, 4, 5};
	float		float_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	char		char_array[5] = {'a', 'b', 'c', 'd', 'e'};
	std::string	string_array[5] = {"one", "two", "three", "four", "five"};

	std::cout << "Int array:" << std::endl;
	iter(int_array, 5, print);
	std::cout << "Float array:" << std::endl;
	iter(float_array, 5, print);
	std::cout << "Char array:" << std::endl;
	iter(char_array, 5, print);
	std::cout << "String array:" << std::endl;
	iter(string_array, 5, print);

	std::cout << "Int array after increment:" << std::endl;
	iter(int_array, 5, increment);
	iter(int_array, 5, print);
	std::cout << "Float array after increment:" << std::endl;
	iter(float_array, 5, increment);
	iter(float_array, 5, print);
	std::cout << "Char array after increment:" << std::endl;
	iter(char_array, 5, increment);
	iter(char_array, 5, print);
	std::cout << "String array after increment:" << std::endl;
	iter(string_array, 5, increment);
	iter(string_array, 5, print);
	
	return (0);
}
