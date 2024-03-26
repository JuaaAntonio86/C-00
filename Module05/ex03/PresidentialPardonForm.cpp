/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:31:04 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/25 22:18:17 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) 
: AForm("PresidentialPardonForm", 25, 5) , _target(target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other)
: AForm(other), _target(other._target){}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &other){
	AForm::operator=(other);
	this->_target = other._target;
	return (*this);
}

std::string const & PresidentialPardonForm::getTarget() const{return (this->_target);}

void	PresidentialPardonForm::execute(Bureaucrat const &executor)const
{
	if ((int)executor.getGrade() > this->getGradeExecute())
		throw (Bureaucrat::GradeTooHighException());
	else if (this->getSigned() == false)
		throw (AForm::NotSignedException());
	else
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

