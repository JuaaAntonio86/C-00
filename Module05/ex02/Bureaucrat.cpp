/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:43:38 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/25 22:37:19 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"
#include	<iostream>

Bureaucrat::Bureaucrat(){}

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

void		Bureaucrat::signAForm(AForm &ref){
	try{
		ref.beSigned(*this);
		std::cout 
			<< this->getName() << " signed "
			<< ref.getName() << std::endl;
	}
	catch(AForm::GradeTooLowException &e){
		std::cout 
			<< this->getName() << " couldn't sign " 
			<< ref.getName() << " because "
			<< e.what() << "." << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &ref){
		try{
		ref.execute(*this);
		std::cout 
			<< this->getName() << " executed " 
			<< ref.getName() << std::endl;
	}
	catch(std::exception &e){
		std::cout 
			<< this->getName() << " couldn't execute Form: " 
			<< ref.getName() << " because "
			<< e.what() << "." << std::endl;
	}
}

	/* **********************Exception Classes************************** */

const char* Bureaucrat::GradeTooHighException::what() const throw()
{ return "Exception out of range: Grade too high";}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{ return "Exception out of range: Grade too low";}


	/* **********************ostream overload operator*********************** */

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &other){
	out << other.getName() << ", Bureaucrat grade " << other.getGrade() << ".";
	return out;
}
