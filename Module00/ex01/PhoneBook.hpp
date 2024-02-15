/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm <juan-anm@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:59:06 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/15 15:56:46 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <vector>
# include <unistd.h>
# include "Contacts.class.hpp"


class PhoneBook
{

public:
				PhoneBook();
				~PhoneBook();
	void		phoneloop( PhoneBook &phonebook);
	static	int	i;
	Contacts	_contacts[8];

private:
	void		addContact();
	void		searchContact();
};

#endif