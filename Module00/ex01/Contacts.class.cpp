/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:58:26 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/11 00:55:39 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contacts::Contacts()
{
	std::cout << "Contact created" << std::endl;
}
Contacts::~Contacts()
{
	std::cout << "Contact destroyed" << std::endl;
}

Contacts*	Contacts::addContact(int i)
{
	std::string message;

	_index = i;
	message = "Please insert new contact's first name:";
	std::cout << message << std::endl;
	_firstName = checkstr(message, 0);
	message = "Please insert new contact's last Name:";
	std::cout << message << std::endl;
	_lastName = checkstr(message, 0);
	message = "Please insert new contact's nick name:";
	std::cout << message << std::endl;
	_nickName = checkstr(message, 0);
	message = "Please insert new contact's phone number:";
	std::cout << message << std::endl;
	_phoneNumber = checkstr(message, 1);
	message = "Please insert new contact's darkest secret:";
	std::cout << message << std::endl;
	_darkestSecret = checkstr(message, 0);;
	std::cout << "Contact added: " << _firstName << " " << _lastName << std::endl;
	return (this);
}

std::string	Contacts::checkstr(std::string message, int i)
{
	std::string	input;

	std::getline(std::cin, input);
	while (!checkinput(input, i))
	{
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
		std::cout << message << std::endl;
		std::getline(std::cin, input);

	}
	return (input);
}


bool		Contacts::checkinput(std::string input, int i)
{
	int		j;

	j = 0;
	if (input.empty())
	{
		return (false);
	}
	if (i)
	{
		while (input[j])
		{
			if (!isdigit(input[j]))
			{
				std::cout << "Please: only Numerical characters" << std::endl;
				return (false);
			}
			j++;
		}
	}
	else
	{
		while (input[j])
		{
			if (!isalpha(input[j]))
			{
				std::cout << "Please: only Alphabetical characters" << std::endl;
				return (false);
			}
			j++;
		}
	}
	return (true);
}

void	Contacts::printContact()
{
	std::string test[9];
	test[8] = NULL;
	if (this->_firstName == "")
		return ;
	test = _firstName;
	std::cout << this->_index << " " << test << " " << this->_lastName << " " << this->_nickName << std::endl;
}