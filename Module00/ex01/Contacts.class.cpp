/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:58:26 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/09 18:51:21 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contacts::Contacts()
{
	addContact();
}
Contacts::~Contacts()
{

}

Contacts*	Contacts::addContact()
{
	std::string message;

	message = "Please insert new contact first name:"
	std::cout << message << std::endl;
	_firstName = checkstr(message, 0);
	message = "Please insert new contact last Name:";
	std::cout << message << std::endl;
	std::cin >> _lastName;
	std::cout << "Please insert new contact nick name:" << std::endl;
	std::cin >> _nickname;
	std::cout << "Please insert new contacts phone number:" << std::endl;
	std::cin >> _phoneNumber;
	std::cout << "Please insert new contacts darkest secret:" << std::endl;
	std::cin >> _darkestSecret;
	std::cout << "Contact added: " << _firstName << " " << _lastName << " " << _nickname << " " << _phoneNumber << " " << _darkestSecret << std::endl;
	return (this);
}

std::string	Contacts::checkstr(std::string message, int i)
{
	std::string	input;

	std::cin >> input;
	while (!checkinput(input, 0))
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
			if (isdigit(input[j]))
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
			if (isalpha(input[j]))
			{
				std::cout << "Please: only Alphabetical characters" << std::endl;
				return (false);
			}
			j++;
		}
	}
	return (true);
}
