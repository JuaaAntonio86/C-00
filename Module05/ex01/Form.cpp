/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:15:20 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/19 23:20:57 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form(const std::string &name, int gradetosign, int gradetoexecute) 
: _name(name), _signed(0), _gradetosign(gradetosign), _gradetoexecute(gradetoexecute){
	if (_gradetoexecute > MIN_GRADE || _gradetosign > MIN_GRADE)
		throw	Form::GradeTooHighException();
	else if (_gradetoexecute < MAX_GRADE || _gradetosign < MAX_GRADE)
		throw	Form::GradeTooLowException();
	std::cout
		<< "Form constructor called" << std::endl;
}

Form::Form(Form const &other)
: _name(other.getName()), _signed(0), _gradetosign(other.getGradeSign()), _gradetoexecute(other.getGradeExecute())
{
	std::cout
		<< "Form copy constructor called" << std::endl;
}

Form::~Form(){
	std::cout
		<< "Form destructor called" << std::endl;
}

Form&	Form::operator=(Form const &other){
	if (this != &other){
		this->_signed = other.getSigned();
	}
	return *this;

}

	/* **********************Class Methods************************** */

const std::string & Form::getName() const{
	return this->_name;
}

bool 	Form::getSigned() const{
	return this->_signed;
}

int	Form::getGradeSign() const{
	return this->_gradetosign;
}

int	Form::getGradeExecute() const{
	return this->_gradetoexecute;
}

void		Form::beSigned(const Bureaucrat &ref){
	if (ref.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	this->_signed = true;
}
/* **********************Exception Classes************************** */

const char* Form::GradeTooHighException::what() const throw()
{ return "Exception out of range: Grade too high";}

const char* Form::GradeTooLowException::what() const throw()
{ return "Exception out of range: Grade too low";}

	/* **********************ostream overload operator*********************** */

std::ostream&	operator<<(std::ostream &out, const Form &other){
	out 
	<< "Forms Name: " << other.getName() << std::endl
	<< "Form is signed: " << std::boolalpha << other.getSigned() << std::endl
	<< "Form Grade to sign: " << other.getGradeSign() << std::endl
	<< "Form Grade to execute: " << other.getGradeExecute() << std::endl;
	return out;
}
