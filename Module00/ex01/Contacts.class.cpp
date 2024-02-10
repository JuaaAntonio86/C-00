/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:58:26 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/10 00:33:04 by juan-anm         ###   ########.fr       */
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

Contacts*	Contacts::addContact()
{
	std::string message;

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
	std::cout << "Contact added: " << _firstName << " " << _lastName << " " << _nickName << " " << _phoneNumber << " " << _darkestSecret << std::endl;
	return (this);
}

std::string	Contacts::checkstr(std::string message, int i)
{
	std::string	input;

	std::cin >> input;
	while (!checkinput(input, i))
	{
		std::cout << message << std::endl;
		std::cin >> input;
	}
	return (input);
}


bool		Contacts::checkinput(std::string input, int i)
{
	int		j;

	j = 0;
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
	if (this->_firstName == "")
		return ;
	std::cout << this->_firstName << " " << this->_lastName << std::endl;
}