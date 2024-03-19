/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:16:16 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/19 23:20:32 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

#define MIN_GRADE 	150
#define MAX_GRADE 	1

class Form;

class Bureaucrat{
	private:
		const std::string	_name;
		int					_grade;
					
	public:					
							Bureaucrat();
							Bureaucrat(const std::string &name, int grade);
							Bureaucrat(Bureaucrat const &other);
							~Bureaucrat();
				Bureaucrat& operator=(Bureaucrat const &other);

	/* **********************Class Methods************************** */

				std::string getName() const;
				int 		getGrade() const;
				void		incrementGrade();
				void		decrementGrade();
				void		signForm(Form &ref);

	/* **********************Exception Classes************************** */
	
	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &other);

#endif
