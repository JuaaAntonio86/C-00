/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 00:16:10 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/26 00:16:26 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

class	AForm;

class	Intern
{
	public:
		Intern( void );
		Intern( const Intern &other );
		Intern &	operator=( const Intern &other );
		~Intern( void );

		AForm *	createShrubberyForm(const std::string & target) const;
		AForm *	createRobotomyForm(const std::string & target) const;
		AForm *	createPardonForm(const std::string & target) const;
		AForm *	makeForm(const std::string & name, const std::string & target) const;

		class	FormNotFound : public std::exception
		{
			public:
				const char *	what() const throw();
		};
};

#endif
