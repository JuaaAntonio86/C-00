/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 00:02:15 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/02 23:11:57 by juan-anm         ###   ########.fr       */
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
			i = static_cast<int>(std::atoi(s.c_str()));
		if (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max())
			std::cout << "int: impossible\n";
		else
			std::cout << "int: " << i << std::endl;
	}
	else
		std::cout << "int: impossible\n";
}

void toFloat(std::string s, bool isInt)
{
	float f;
	std::stringstream ss(s);
	if (!s.empty() || s.size() == 1)
	{
		if (s.size() == 1)
			f = static_cast<double>(s[0]);
		else if (isInt)
			f = static_cast<float>(std::atoi(s.c_str()));
		else
			f = (std::atof(s.c_str()));
		if (f < std::numeric_limits<float>::min() || f > std::numeric_limits<float>::max())
			std::cout << "float: impossible\n";
		else
		{
			if (f - static_cast<int>(f) == 0)
				std::cout << "float: " <<  std::fixed << static_cast<int>(f) << ".0f" << std::endl;
			else
				std::cout << "float: " <<  std::fixed << f << "f" << std::endl;
		}
	}
	else
		std::cout << "float:  impossible\n";
}

void toDouble(std::string s, bool isInt)
{
	double d;
	std::stringstream ss(s);

	if (!s.empty() || s.size() == 1)
	{
		if (s.size() == 1)
			d = static_cast<double>(s[0]);
		else if (isInt)
			d = static_cast<double>(std::atoi(s.c_str()));
		else
			d = (std::atof(s.c_str()));
			if (d < std::numeric_limits<double>::min() || d > std::numeric_limits<double>::max())
			std::cout << "double: impossible\n";
		else
		{
			if (d - static_cast<int>(d) == 0)
				std::cout << "double: " <<  std::fixed << static_cast<int>(d) << ".0" << std::endl;
			else
				std::cout << "double: " << std::fixed << d << std::endl;
		}
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
	bool isInt = true;

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
			if (s.find('.') != std::string::npos)
			{
				isInt = false;
				if (s[s.size() - 1] == 'f')
					s.erase(s.size() - 1);
			}
			toFloat(s, isInt);
			toDouble(s, isInt);
		}
	}
}
