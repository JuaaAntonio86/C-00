/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:31:04 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/26 17:23:31 by juan-anm         ###   ########.fr       */
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
		throw (Bureaucrat::GradeTooLowException());
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
		for (int i = 0; i < 3; i++)
		{
		outfile <<
			"               v                    v                        v                       v                  v" << std::endl <<
			"              >X<                  >X<                      >X<                     >X<              >X<" << std::endl <<
			"               A                    A                        A                       A                 A" << std::endl <<
			"              d$b                  d$b                      d$b                     d$b               d$b" << std::endl <<
			"            .d\\$$b.              .d\\$$b.                .d\\$$b.                 .d\\$$b.           .d\\$$b." << std::endl <<
			"          .d$i$$\\$$b.          .d$i$$\\$$b.            .d$i$$\\$$b.             .d$i$$\\$$b.        .d$i$$\\$$b." << std::endl <<
			"             d$$@b                d$$@b                    d$$@b                    d$$@b               d$$@b" << std::endl <<
			"            d\\$$$ib              d\\$$$ib                 d\\$$$ib                d\\$$$ib            d\\$$$ib" << std::endl <<
			"          .d$$$\\$$$b.          .d$$$\\$$$b.             .d$$$\\$$$b.             .d$$$\\$$$b.       .d$$$\\$$$b." << std::endl <<
			"        .d$$@$$$$\\$$ib.      .d$$@$$$$\\$$ib.         .d$$@$$$$\\$$ib.         .d$$@$$$$\\$$ib.   .d$$@$$$$\\$$ib." << std::endl <<
			"            d$$i$$b                d$$i$$b                  d$$i$$b                 d$$i$$b            d$$i$$b" << std::endl <<
			"           d\\$$$$@$b              d\\$$$$@$b              d\\$$$$@$b              d\\$$$$@$b         d\\$$$$@$b" << std::endl <<
			"        .d$@$$\\$$$$$@b.        .d$@$$\\$$$$$@b.        .d$@$$\\$$$$$@b.        .d$@$$\\$$$$$@b.    .d$@$$\\$$$$$@b." << std::endl <<
			"    .d$$$$i$$$\\$$$$$$@$$$$$$\\$$$$$$@$$$$$$@$$$$$$\\$$$$$$@$$$$$$\\$$$$$$@$$$$$$\\$$$$$$@$$$$$$\\$$$$$$@$$$$$$\\$$$$$$i$$b." << std::endl <<
			"                ###                    ###                    ###                    ###                    ###" << std::endl <<
			"                ###                    ###                    ###                    ###                    ###" << std::endl <<
			"                ###                    ###                    ###                    ###                    ###" << std::endl <<
		std::endl;
		}
	outfile.close();
	}
}
