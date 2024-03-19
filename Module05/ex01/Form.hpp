/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:15:25 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/19 23:16:42 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <istream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		const std::string	_name;
		bool				_signed;
		int const		 	_gradetosign;
		int const			_gradetoexecute;
							Form();

	public:
							~Form();
							Form(const std::string &name, int gradetosign, int gradetoexecute);
							Form(Form const &other);
		Form& 				operator=(Form const &other);

	/* **********************Class Methods************************** */

		const std::string & getName() const;
		bool				getSigned() const;
		int					getGradeSign() const;
		int					getGradeExecute() const;
		void				beSigned(const Bureaucrat &ref);

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

std::ostream&	operator<<(std::ostream &out, const Form &other);

#endif
