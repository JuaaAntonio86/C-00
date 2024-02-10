/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:48:10 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/11 00:42:39 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CLASS_HPP
# define CONTACTS_CLASS_HPP

# include "PhoneBook.hpp"

class Contacts
{
public:
				Contacts();
				~Contacts();
	Contacts*	addContact(int i);
	bool		checkinput(std::string input, int i);
	std::string	checkstr(std::string message, int i);
	void 		printContact();
	
private:
	int			_index;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};

#endif