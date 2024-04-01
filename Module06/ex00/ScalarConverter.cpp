/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 00:02:15 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/02 00:37:29 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void toChar(std::string s)
{
	int i;
	char c;
	std::stringstream ss(s);

	if (ss >> i || s.size() == 1)
	{
		if (s.size() == 1)
			i = static_cast<int>(s[0]);
		if (i >= 0 && i <= 127)
		{
			c = static_cast<char>(i);
			if (c < 32 || c > 126)
				std::cout << "char: Non displayable\n";
			else
				std::cout << "char: '" << c << "'" << std::endl;
		}
		else
			std::cout << "char: impossible\n";
	}
	else
		std::cout << "char: impossible\n";
}

void toInt(std::string s)
{
	int i;
	std::stringstream ss(s);

	if (ss >> i || s.size() == 1)
	{
		if (s.size() == 1)
			i = static_cast<int>(s[0]);
		else 
			i = static_cast<int>(std::stoi(s));
		std::cout << "int: " << i << std::endl;
	}
	else
		std::cout << "int: impossible\n";
}

void toFloat(std::string s)
{
	float f;
	std::stringstream ss(s);
	if (ss >> f || s.size() == 1)
	{
		if (s.size() == 1)
			f = static_cast<float>(s[0]);
		else
			f = static_cast<float>(std::stof(s));
		if (f - static_cast<int>(f) == 0)
			std::cout << "float: " << f << ".0f" << std::endl;
		else
			std::cout << "float: " << f << "f" << std::endl;
	}
	else
		std::cout << "float:  impossible\n";
}

void toDouble(std::string s)
{
	double d;
	std::stringstream ss(s);

	if (ss >> d || s.size() == 1)
	{
		if (s.size() == 1)
			d = static_cast<double>(s[0]);
		else
			d = static_cast<double>(std::stod(s));
		if (d - static_cast<int>(d) == 0)
			std::cout << "double: " << d << ".0" << std::endl;
		else
			std::cout << "double: " << d << std::endl;
	}
	else
		std::cout << "double: impossible\n";
}

void handlePseudoLiterals(std::string s)
{
	if (s == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (s == "+inff")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (s == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

void ScalarConverter::convert(std::string s)
{
	int i = 0;
	toChar(s);
	toInt(s);
	std::string pseudo[3] = {"-inff", "+inff", "nanf"};
	while (i < 3)
	{
		if (s == pseudo[i])
		{
			handlePseudoLiterals(s);
			return;
		}
		i++;
		if (i == 3)
		{
			if (s[s.size() - 1] == 'f')
				s.erase(s.size() - 1);
			toFloat(s);
			toDouble(s);
		}
	}
}
