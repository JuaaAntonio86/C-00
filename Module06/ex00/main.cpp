 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 00:06:33 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/02 00:47:03 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		try{
	ScalarConverter::convert("-0.5454f");
	std::cout << std::endl;
	ScalarConverter::convert("2144545");
	std::cout << std::endl;
	ScalarConverter::convert("*");
	std::cout << std::endl;
	ScalarConverter::convert("42.0f");
	std::cout << std::endl;
	ScalarConverter::convert("7762489424379839247843672387823478924378324.321");
	std::cout << std::endl;
	ScalarConverter::convert("-312783217689239789");
	std::cout << std::endl;
	ScalarConverter::convert("8975238972438972398798527397580349870439834.f");
	std::cout << std::endl;
	ScalarConverter::convert("0.0000000000");
	std::cout << std::endl;
	ScalarConverter::convert("0.00000000000000000000000000001f");
	std::cout << std::endl;
	ScalarConverter::convert("2144545");
	std::cout << std::endl;
	ScalarConverter::convert("hola");
	std::cout << std::endl;
	ScalarConverter::convert("9");
	std::cout << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << std::endl;
	ScalarConverter::convert("+inf");
	std::cout << std::endl;
	ScalarConverter::convert("-inff");
	std::cout << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << std::endl;
	ScalarConverter::convert("nan");
	std::cout << std::endl;
	ScalarConverter::convert("nanf");
	std::cout << std::endl;
	ScalarConverter::convert("");
	std::cout << std::endl;
	ScalarConverter::convert("2147483648");
	std::cout << std::endl;
	
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}

	}
	else if (argc == 2)
		ScalarConverter::convert(argv[1]);
	return (0);
}
