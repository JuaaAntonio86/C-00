/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:24:57 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/19 22:31:51 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout 
	<< "The memory address of the string variable:	" << &str << std::endl
	<< "The memory address held by stringPTR:		" << ptr << std::endl
	<< "The memory address held by stringREF:		" << &ref << std::endl
	<< "The value of the string variable:		" << str << std::endl
	<< "The value pointed to by stringPTR:		" << *ptr << std::endl
	<< "The value pointed to by stringREF:		" << ref << std::endl;
	return (0);
}