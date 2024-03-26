/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:33:24 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/26 16:33:16 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat bureaucrat("Juan Antonio", 3);
	Bureaucrat test("pingu", 148);
	Bureaucrat Med("medio", 29);
	
	Intern		Lewinsky;
	Intern		Lewinsky1;
	Intern		Lewinsky2;
	
	AForm		*form = NULL;
	AForm		*form1 = NULL;
	AForm		*form2 = NULL;
	
	try
	{
		form = Lewinsky.makeForm("robotomy", "Bender");
		std::cout << std::endl;
		form1 = Lewinsky1.makeForm("pardon", "Palomo");
		std::cout << std::endl;
		form2 = Lewinsky2.makeForm("shrubbery", "Pancracio");
		std::cout << std::endl;

		bureaucrat.signAForm(*form);
		bureaucrat.executeForm(*form);
		
		std::cout << std::endl;
		
		test.signAForm(*form1);
		test.executeForm(*form1);
		
		std::cout << std::endl;
		
		Med.signAForm(*form2);
		Med.executeForm(*form2);
		
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	delete form;
	delete form1;
	delete form2;
	return (0);
}
