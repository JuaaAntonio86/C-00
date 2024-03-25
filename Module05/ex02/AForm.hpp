/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:15:25 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/25 17:08:25 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <istream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	private:
		const std::string	_name;
		bool				_signed;
		int const		 	_gradetosign;
		int const			_gradetoexecute;
							AForm();

	public:
							~AForm();
							AForm(const std::string &name, int gradetosign, int gradetoexecute);
							AForm(AForm const &other);
		AForm& 				operator=(AForm const &other);

	/* **********************Class Methods************************** */

		const std::string & getName() const;
		bool				getSigned() const;
		int					getGradeSign() const;
		int					getGradeExecute() const;
		void				beSigned(const Bureaucrat &ref);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		
	/* **********************Exception Classes************************** */

	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
	class 	NotSignedException : public std::exception{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, const AForm &other);

#endif
