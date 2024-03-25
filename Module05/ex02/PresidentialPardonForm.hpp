/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:31:06 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/25 22:03:25 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

class PresidentialPardonForm : public AForm {
	private:
		std::string _target;
		PresidentialPardonForm();

	public:
		PresidentialPardonForm(std::string const &target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &other);
		PresidentialPardonForm & operator=(PresidentialPardonForm const &other);
		
		std::string const & getTarget() const;
		void	execute(Bureaucrat const & executor) const;
};

#endif
