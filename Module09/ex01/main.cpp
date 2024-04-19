/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:31:42 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/19 19:30:27 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		try {
			RPN	rpn;
			rpn.input_parser(argv[1]);
		}
		catch(const std::exception& e){
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "Bad arguments: [usage]: ./RPN  arg = \"inverted Polish mathematical expression\"";
}
