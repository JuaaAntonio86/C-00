/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:31:49 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/23 16:39:11 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <stdlib.h>

class RPN{
	private:
							RPN(const RPN& other);
		RPN& 				operator=(const RPN& other);
		std::stack<int>		stack;
		void				process_input(char ope);
		bool				is_operand(char ope) const;
	
	public:
							RPN();
							~RPN();
		void				input_parser(const std::string& arg);
};
