/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:40:28 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/21 16:33:21 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include <fstream>
# include <sstream>
# include <vector>

std::string		file;
std::string		s1;
std::string		s2;
std::ifstream	fl1;
std::ofstream 	fl2;

int	replace_strings(void);

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		file = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		fl1.open(file);
		if (!fl1.is_open())
		{
			std::cerr << file << " :" << strerror(errno) << std::endl;
			return (1);
		}
		fl2.open(file + std::string(".replace"));
		if (!fl2.is_open())
		{
			std::cerr << file << ".replace" << " :" << strerror(errno) << std::endl;
			fl1.close();
			return (1);
		}
		return (replace_strings());
	}
	else
	{
		std::cout 
			<< "Please insert correct arguments:" << std::endl
			<< " ./Replace_strings [file name] [string to remove] [string to insert]"
			<< std::endl;
		return (1);
	}
}

int	replace_strings(void)
{
	std::string			line;
	size_t				pos;

	if (std::getline(fl1, line, '\0'))
	{	
		pos = 0;
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s2.length());
		}
		fl2 << line;
	}
	else
	{
		std::cout << "Error, empty file." << std::endl;
		return (1);
	}
	fl1.close();
	fl2.close();
	return (0);
}
