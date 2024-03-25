/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:33:24 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/25 23:34:18 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try {
		Bureaucrat bureaucrat("Juan Antonio", 3);
		Bureaucrat test("pingu", 148);
		Bureaucrat Med("medio", 99);
		ShrubberyCreationForm	papele("PAPER");
		RobotomyRequestForm		roboto("ROBOTOMIA");
		PresidentialPardonForm 	presi("TERMINATOR");

		std::cout << std::endl << bureaucrat << std::endl;
		std::cout << std::endl << Med << std::endl;
		std::cout << std::endl << test << std::endl;
		
		std::cout << std::endl;
		
		bureaucrat.signAForm(papele);
		bureaucrat.executeForm(papele);
		bureaucrat.signAForm(roboto);
		bureaucrat.executeForm(roboto);
		bureaucrat.executeForm(roboto);
		bureaucrat.executeForm(roboto);
		bureaucrat.executeForm(roboto);
		bureaucrat.signAForm(presi);
		bureaucrat.executeForm(presi);
		
		std::cout << std::endl;

		Med.signAForm(papele);
		Med.executeForm(papele);
		Med.signAForm(roboto);
		Med.executeForm(roboto);
		Med.signAForm(presi);
		Med.executeForm(presi);
		
		std::cout << std::endl;
		
		test.signAForm(papele);
		test.executeForm(papele);
		test.signAForm(roboto);
		test.executeForm(roboto);
		test.signAForm(presi);
		test.executeForm(presi);

		std::cout << std::endl;
		std::cout << std::endl << papele << std::endl;
		std::cout << std::endl << roboto << std::endl;
		std::cout << std::endl << presi << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}
