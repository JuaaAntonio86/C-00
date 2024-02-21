/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:41:22 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/21 15:27:26 by juan-anm         ###   ########.fr       */
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

	if (std::getline(fl1, line, '\0'))
	{	
		pos = 0;
		pos = line.find(this->_s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, this->_s1.length());
			line.insert(pos, this->_s2);
			pos = line.find(this->_s1, pos + this->_s2.length());
		}
		fl2 << line;
	}
	fl1.close();
	fl2.close();
	return ;
}
