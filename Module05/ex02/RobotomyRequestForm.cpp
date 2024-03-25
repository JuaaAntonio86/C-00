/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:31:04 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/25 22:18:17 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) 
: AForm("RobotomyRequestForm", 72, 45) , _target(target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
: AForm(other), _target(other._target){}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &other){
	AForm::operator=(other);
	this->_target = other._target;
	return (*this);
}

std::string const & RobotomyRequestForm::getTarget() const{return (this->_target);}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	static int i = 0;

	if(executor.getGrade() > this->getGradeExecute())
		throw (Bureaucrat::GradeTooHighException());
	else if (this->getSigned() == false)
		throw (AForm::NotSignedException());
	else
	{
		
		std::cout << "..WWwhiiiiirrr......WWRrriiiiiiiirr.... ";
		if (i++ % 2 == 0)
			std::cout << this->_target << " has been succesfully robotomized" << std::endl;
		else
			std::cout << "Robotomy on " << this->_target << " failed" << std::endl;
	}
}
