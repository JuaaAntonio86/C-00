/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:41:22 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/20 19:08:59 by juan-anm         ###   ########.fr       */
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
	std::string			buffer;
	std::string			line;
	std::vector<char>	whitespaces;
	int					j;
		
	while (std::getline(fl1, line))
	{
		j = 0;
		for(size_t i = 0; i < line.length(); i++)
		{
			if (isspace(line[i]))
				whitespaces.push_back(line[i]);
		}
		std::istringstream iss(line);
		while(iss >> buffer)
		{
			if (buffer == this->_s1)
				buffer = this->_s2;		
			fl2 << buffer;
			fl2 << whitespaces[j++];
		}
		whitespaces.clear();
		fl2 << std::endl;
	}
	fl1.close();
	fl2.close();
	return ;
}
