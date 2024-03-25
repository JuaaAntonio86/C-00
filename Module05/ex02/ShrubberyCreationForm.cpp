/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:31:04 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/25 19:14:29 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) 
: AForm("ShrubberyCreationForm", 145, 137) , _target(target){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
: AForm(other), _target(other._target){}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other){
	AForm::operator=(other);
	this->_target = other._target;
	return (*this);
}

std::string const & ShrubberyCreationForm::getTarget() const{return (this->_target);}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() > this->getGradeExecute())
		throw (Bureaucrat::GradeTooHighException());
	else if (this->getSigned() == false)
		throw (AForm::NotSignedException());
	else
	{
		std::ofstream	outfile;
		const std::string	name = this->getTarget() + "_shrubbery";
		const char	*filename = name.c_str();

		outfile.open(filename);
		if (outfile.fail() == true)
			std::cerr << "Error opening file." << std::endl;
		for (int i = 0; i < 5; i++)
		{
			outfile <<
			"         v" << std::endl <<
			"        >X<" << std::endl <<
			"         A" << std::endl <<
			"        d$b" << std::endl <<
			"      .d\\$$b." << std::endl <<
			"    .d$i$$\\$$b." << std::endl <<
			"       d$$@b" << std::endl <<
			"      d\\$$$ib" << std::endl <<
			"    .d$$$\\$$$b" << std::endl <<
			"  .d$$@$$$$\\$$ib." << std::endl <<
			"      d$$i$$b" << std::endl <<
			"     d\\$$$$@$b" << std::endl <<
			"  .d$@$$\\$$$$$@b." << std::endl <<
			".d$$$$i$$$\\$$$$$$b." << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
		std::endl;
		}
		outfile.close();
	}
}
