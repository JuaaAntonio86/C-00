/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 00:14:55 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/11 18:17:35 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{
		try{
				Span sp = Span(5);
		
				sp.addNumber(6);
				sp.addNumber(3);
				sp.addNumber(17);
				sp.addNumber(9);
				sp.addNumber(11);
				std::cout << sp.shortestSpan() << std::endl;
				std::cout << sp.longestSpan() << std::endl;
				std::cout <<  std::endl;
		}
		catch(const std::exception & e){
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try{
				Span sp = Span(1000000);
				
				sp.addNumber(-2147483648);
				sp.addNumber(3);
				sp.addNumber(17);
				sp.addNumber(9);
				sp.addNumber(2147483647);
				
				std::cout << sp.shortestSpan() << " SHORTEST" << std::endl;
				std::cout << sp.longestSpan() << " LONGEST" << std::endl;
				
				std::vector<int> example;
				
				for(int i =0; i < 999994; ++i)
				{
					example.push_back(i);
				}
				std::vector<int>::iterator s = example.begin();
				std::vector<int>::iterator e = example.end();

				sp.addNumber(s,e);
				std::cout << sp.shortestSpan() << " SHORTEST" << std::endl;
				std::cout << sp.longestSpan() << " LONGEST" << std::endl;
				//sp.printSpan();
		}
		catch(const std::exception & e){
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try{
				Span sp = Span(3);
				
				sp.addNumber(-2147483648);
				sp.addNumber(3);
				sp.addNumber(17);
				sp.addNumber(9);
		}
		catch(const std::exception & e){
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
