/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:31:46 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/19 20:00:56 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

void RPN::input_parser(const std::string& arg){
	std::string	tokens;
	std::istringstream iss(arg);

	while(std::getline(iss, tokens, ' ')){
		if (tokens.length() != 1)
			throw std::invalid_argument("Invalid input");
		if (isnumber(tokens[0]))
			stack.push(atoi((tokens.c_str())));
	}
}

void RPN::process_input(){
	
}
