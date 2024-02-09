/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:08:42 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/09 14:49:31 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string	P;

	while (!phonebook.phoneloop(P))
	{
		std::cout << "Please insert a command: ADD, SEARCH or EXIT" << std::endl;
		std::cin >> P;
	}
	
	phonebook.addContact();
	return (0);
}