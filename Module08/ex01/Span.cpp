/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 00:15:19 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/10 01:58:13 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(const Span& other) : _Nsize(other._Nsize), _Span(other._Span){}

Span& Span::operator=(const Span& other){
	if (this != &other)
	{
		_Nsize = other._Nsize;
		_Span = other._Span;
	}
	return *this;
}

Span::Span(int N): _Nsize(N) {}

Span::~Span(){
	this->_Span.clear();
}

void	Span::addNumber(int N){
	if(this->_Span.size() > this->_Nsize)
		throw std::range_error("Error: while storing a value out of range");
	else
		this->_Span.push_back(N);
}

unsigned int	Span::shortestSpan(){
	if(this->_Span.size() < 2)
		throw std::invalid_argument("Error: Not enough containers to calculate Span");
	else{
		std::vector<int> sorted = this->_Span;
		std::sort(sorted.begin(), sorted.end());
		int diff = INT_MAX;
		for(std::vector<int>::iterator it = sorted.begin() + 1; it != sorted.end(); it++)
		{
			std::cout << *(it-1) <<std::endl;
			if (diff > (*it - (*(it - 1))))
				diff = (*it - (*(it - 1)));
		}
			std::cout << *(sorted.end() - 1) <<std::endl;
		return static_cast<unsigned int> (diff);
	}
	
}

long int	Span::longestSpan(){
	if(this->_Span.size() < 2)
		throw std::invalid_argument("Error: Not enough containers to calculate Span");
	else{
		std::vector<int> sorted = this->_Span;
		std::sort(sorted.begin(), sorted.end());
		return ((*(sorted.end() - 1)) - (*(sorted.begin())));
	}
}
