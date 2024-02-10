/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:59:06 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/10 00:27:57 by juan-anm         ###   ########.fr       */
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
	void	phoneloop(PhoneBook phonebook);
	void	addContact();
	void	searchContact();

private:
	Contacts	_contacts[8];
};

#endif