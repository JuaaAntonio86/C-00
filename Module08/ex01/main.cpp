/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 00:14:55 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/10 17:35:20 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span sp = Span(100000);
	
	sp.addNumber(-2147483648);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(2147483647);
	
	std::cout << sp.shortestSpan() << " SHORT" << std::endl;
	std::cout << sp.longestSpan() << " LONG" << std::endl;
	
	std::vector<int> example;
	
	for(int i =0; i < 10000; ++i)
	{
		example.push_back(i);
	}
	std::vector<int>::iterator s = example.begin();
	std::vector<int>::iterator e = example.end();

	sp.addNumber(s,e);
	sp.printSpan();
		
	return 0;
}
