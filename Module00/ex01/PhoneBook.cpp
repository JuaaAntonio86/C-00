/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm <juan-anm@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:57:48 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/15 16:14:52 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Juan's PhoneBook has been created" << std::endl;
	static int	id = 0;

	while(id < 8)
	{
		_contacts[id].index = 0;
		id++;
	}
}

PhoneBook::~PhoneBook()
{
	std::cout << "Juan's PhoneBook has been destroyed" << std::endl;
}



void	PhoneBook::addContact()
{
		static int	id = 0;

		if (id > 8)
			id = 0;
		_contacts[id % 8].addContact(id % 8);
		id++;
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
		while ((1))
		{
			std::cout << "Please insert the index of the contact you want to expand or \"Q\" to return" << std::endl;
			std::string input;
			std::getline(std::cin, input);
			if (std::cin.fail() || std::cin.bad()|| std::cin.eof())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
			}
			if (input.compare("Q") == 0)
				break;
			else if (input.length() == 1 && input[0] >= '1' && input[0] <= '8' && _contacts[input[0] - '0' - 1].index != 0)
			{
				std::cout << "**********************************"<< std::endl;
				std::cout << "         CONTACT INFO" << std::endl;
				std::cout << "First Name    :";
				std::cout << _contacts[input[0] - '0' - 1]._firstName << std::endl;
				std::cout << "Last Name     :";
				std::cout << _contacts[input[0] - '0' - 1]._lastName << std::endl;
				std::cout << "Nick Name     :";
				std::cout << _contacts[input[0] - '0' - 1]._nickName << std::endl;
				std::cout << "Phone Number  :";
				std::cout << _contacts[input[0] - '0' - 1]._phoneNumber << std::endl;
				std::cout << "Darkest secret:";
				std::cout << _contacts[input[0] - '0' - 1]._darkestSecret << std::endl;
				std::cout << std::endl;
				break;
			}
			else
				std::cout << "Invalid index" << std::endl;
		}
	}
	return ;
}


void	PhoneBook::phoneloop(PhoneBook &phonebook)
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

int PhoneBook::i = 0;
