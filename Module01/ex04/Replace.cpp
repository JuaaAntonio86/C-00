/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:41:22 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/21 00:31:41 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

Replace::Replace(std::string s1, std::string s2, std::string file) : _s1(s1), _s2(s2), _file(file)
{
	return ;
}

Replace::~Replace()
{
	return ;
}

void	Replace::replace_strings()
{
	std::ifstream		fl1(this->_file);
	std::ofstream 		fl2(this->_file + std::string(".replace"));
	std::string			line;
	std::string			buffer;
	size_t				pos;
	int					i;

	while (std::getline(fl1, line))
	{	
		i = 0;
		pos = 0;
		while ((pos = line.find(this->_s1, pos)) != std::string::npos)
		{
			buffer += line.substr(i, pos - i) + this->_s2;
			pos += this->_s1.length();
			i = pos + 1;
		
			// line.erase(pos, this->_s1.length());
			// line.insert(pos, this->_s2);
		}

			fl2 << buffer << std::endl;
	}
	fl1.close();
	fl2.close();
	return ;
}
