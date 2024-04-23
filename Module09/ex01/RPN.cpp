/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:31:46 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/23 17:29:11 by juan-anm         ###   ########.fr       */
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
		else if(is_operand(tokens[0]))
			process_input(tokens[0]);
		else
			throw std::invalid_argument("Invalid input");
	}
	if ( stack.size() == 1)
		std::cout << stack.top() << std::endl;
}

bool RPN::is_operand(char ope) const{
	if (ope == '/' || ope == '*' || ope == '-' || ope == '+')
		return (1);
	else
		return (0);
}

void RPN::process_input(char ope){
	int		first;
	int		second;

	if (stack.size() < 2)
		throw std::invalid_argument("Invalid input");
	second = stack.top();
	stack.pop();
	first = stack.top();
	stack.pop();
	if (ope == '/')
		stack.push(first / second);
	else if (ope == '*')
		stack.push(first * second);
	else if (ope == '-')
		stack.push(first - second);
	else if (ope == '+')
		stack.push(first + second);
}
