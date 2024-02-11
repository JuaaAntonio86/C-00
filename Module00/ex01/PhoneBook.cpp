/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:57:48 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/12 00:48:09 by juan-anm         ###   ########.fr       */
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

		if (i > 8)
			i = 0;
		_contacts[i % 8].addContact(i % 8);
		i++;
}

void	PhoneBook::searchContact()
{
	int i = 0;
	std::cout << "|************PHONE BOOK CONTACTS************|" << std::endl;
	std::cout << std::endl;
	std::cout << "|   INDEX  |FIRST NAME|LAST  NAME|NICK  NAME|" << std::endl;
	while (i < 8 && _contacts[i].index != 0)
	{
		_contacts[i].printContact();
		i++;
	}
	if (i == 0)
		std::cout << "The PhoneBook is empty" << std::endl;
	else
	{
		std::cout << "Please insert the index of the contact you want to see" << std::endl;
		std::string input;
		std::getline(std::cin, input);
		if (std::cin.fail() || std::cin.bad()|| std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
		}
		if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
		{
			i = input[0] - '0';
			_contacts[i].printContact();
		}
		else
			std::cout << "Invalid index" << std::endl;
	}
}


void	PhoneBook::phoneloop(PhoneBook phonebook)
{
	std::string input;


    while (input.compare("EXIT"))
	{
        std::cout << "Please insert a command: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
        if (input == "ADD")
            phonebook.addContact();
        else if (input == "SEARCH")
        {
			phonebook.searchContact();
		}
		if (std::cin.fail() || std::cin.bad()|| std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
		}
    }
	return ;
}
