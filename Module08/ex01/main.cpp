/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 00:14:55 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/10 12:03:59 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span sp = Span(-100);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	std::vector<int> example;
	
	for(int i =0; i < 10; ++i)
	{
		example.push_back(i);
	}
	std::vector<int>::iterator s = example.begin();
	std::vector<int>::iterator e = example.end();

	sp.addNumber(s,e);
	sp.printSpan();
		
	return 0;
}
