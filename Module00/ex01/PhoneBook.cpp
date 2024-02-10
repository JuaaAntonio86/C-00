/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:57:48 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/11 00:42:59 by juan-anm         ###   ########.fr       */
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

		_contacts[i % 8].addContact(i % 8);
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


    while (input.compare("EXIT"))
	{
        std::cout << "Please insert a command: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, input);
        if (input.empty())
            continue;
        if (input == "ADD")
            phonebook.addContact();
        else if (input == "SEARCH")
        {
			phonebook.searchContact();

		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
	return ;
}
