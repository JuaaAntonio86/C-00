/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 00:15:19 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/10 12:06:38 by juan-anm         ###   ########.fr       */
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

Span::Span(int N): _Nsize(N) {
	if (_Nsize <= 0) {
            throw std::invalid_argument("Invalid value, not allowed for Nsize");
}

Span::~Span(){
	this->_Span.clear();
}

void	Span::addNumber(int N){
	if(this->_Span.size() >= this->_Nsize)
		throw std::range_error("Error: while storing a value out of range");
	else
	{
		if(N > INT_MAX || N < INT_MIN)
			throw std::range_error("Error: while storing a value out of range");
		else
			this->_Span.push_back(N);
	}
}

void	Span::addNumber(std::vector<int>::iterator s, std::vector<int>::iterator e){
	if(this->_Span.size() >= this->_Nsize || (this->_Span.size() + std::distance(s,e)) > this->_Nsize)
		throw std::range_error("Error: while storing a value out of range");
	else
	{
		for(;s != e; ++s)
		{
			if(*s > INT_MAX || *s < INT_MIN)
				throw std::range_error("Error: while storing a value out of range");
			else
				this->_Span.push_back(*s);
		}
	}
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

void	Span::printSpan(){
	for(std::vector<int>::iterator it = this->_Span.begin(); it != this->_Span.end(); it++)
		std::cout << *(it) << std::endl;
}
