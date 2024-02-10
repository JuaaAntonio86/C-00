/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:57:48 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/10 01:09:17 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destroyed" << std::endl;
}



void	PhoneBook::addContact()
{
		static int	i = 0;

		_contacts[i % 8].addContact();
		i++;
}

void	PhoneBook::searchContact()
{
	int i = 0;
	while (i < 8)
	{
		_contacts[i].printContact();
		i++;
	}
}


void	PhoneBook::phoneloop(PhoneBook phonebook)
{
	std::string input;

	std::cout << "Please insert a command: ADD, SEARCH or EXIT" << std::endl;
	while (input.compare("EXIT"))
	{
		std::cout << "Please insert a command: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			phonebook.addContact();
		else if (!input.compare("SEARCH"))
			phonebook.searchContact();
    	std::cin.clear();
		std::cin.ignore();
	}
	return ;
}
