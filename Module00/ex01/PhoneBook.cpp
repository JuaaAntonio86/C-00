/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:57:48 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/09 17:50:48 by juan-anm         ###   ########.fr       */
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
	std::string	contact;
	std::cout << "Please insert new contact:" << std::endl;
	std::cin >> contact;
	std::cout << "Contact added: " << contact << std::endl;
}

void	PhoneBook::searchContact()
{
	std::cout << "Searching contact..." << std::endl;
}

int	phoneloop(std::string input)
{
	while (input.compare("EXIT"))
	{
		std::cout << "Please insert a command: ADD, SEARCH or EXIT" << std::endl;
		std::cin >> input;
	}
	return (0);
}