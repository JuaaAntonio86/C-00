/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:59:06 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/09 18:11:55 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <vector>
# include "Contacts.class.hpp"


class PhoneBook
{

public:
			PhoneBook();
			~PhoneBook();
	void	phonehello();
	bool	phoneloop(std::string input);
	void	addContact();
	void	searchContact();

private:
	std::vector<Contacts*>	_contacts[8];
};

#endif