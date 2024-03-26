/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:15:20 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/25 17:05:16 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm(const std::string &name, int gradetosign, int gradetoexecute) 
: _name(name), _signed(0), _gradetosign(gradetosign), _gradetoexecute(gradetoexecute){
	if (_gradetoexecute > MIN_GRADE || _gradetosign > MIN_GRADE)
		throw	AForm::GradeTooHighException();
	else if (_gradetoexecute < MAX_GRADE || _gradetosign < MAX_GRADE)
		throw	AForm::GradeTooLowException();
	std::cout
		<< "AForm constructor called" << std::endl;
}

AForm::AForm(AForm const &other)
: _name(other.getName()), _signed(0), _gradetosign(other.getGradeSign()), _gradetoexecute(other.getGradeExecute())
{
	std::cout
		<< "AForm copy constructor called" << std::endl;
}

AForm::~AForm(){
	std::cout
		<< "AForm destructor called" << std::endl;
}

AForm&	AForm::operator=(AForm const &other){
	if (this != &other){
		this->_signed = other.getSigned();
	}
	return *this;

}

	/* **********************Class Methods************************** */

const std::string & AForm::getName() const{
	return this->_name;
}

bool 	AForm::getSigned() const{
	return this->_signed;
}

int	AForm::getGradeSign() const{
	return this->_gradetosign;
}

int	AForm::getGradeExecute() const{
	return this->_gradetoexecute;
}

void		AForm::beSigned(const Bureaucrat &ref){
	if (ref.getGrade() > this->getGradeSign())
		throw AForm::GradeTooLowException();
	this->_signed = true;
}
/* **********************Exception Classes************************** */

const char* AForm::GradeTooHighException::what() const throw()
{ return "Exception out of range: Grade too high";}

const char* AForm::GradeTooLowException::what() const throw()
{ return "Exception out of range: Grade too low";}

const char* AForm::NotSignedException::what() const throw()
{ return "Exception: Form not signed";}

	/* **********************ostream overload operator*********************** */

std::ostream&	operator<<(std::ostream &out, const AForm &other){
	out 
	<< "AForms Name: " << other.getName() << std::endl
	<< "AForm is signed: " << std::boolalpha << other.getSigned() << std::endl
	<< "AForm Grade to sign: " << other.getGradeSign() << std::endl
	<< "AForm Grade to execute: " << other.getGradeExecute() << std::endl;
	return out;
}
