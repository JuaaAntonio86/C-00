/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:43:38 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/18 19:02:42 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"
#include	<iostream>

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade){
	if (grade < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other.getName()), _grade(other.getGrade()) {
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &other){
	if (this != &other)
		_grade = other.getGrade();
	return *this;
}

	/* **********************Class Methods*********************************** */

std::string Bureaucrat::getName() const{
	return _name;
}

int 		Bureaucrat::getGrade() const{
	return _grade;
}

void		Bureaucrat::incrementGrade(){
	if (_grade - 1 < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else 
		_grade -= 1;
}

void		Bureaucrat::decrementGrade(){
	if (_grade + 1 > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else 
		_grade += 1;
}

	/* **********************ostream overload operator*********************** */

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &other){
	out << other.getName() << ", Bureaucrat grade " << other.getGrade() << ".";
	return out;
}
