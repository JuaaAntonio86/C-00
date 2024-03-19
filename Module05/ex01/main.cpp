/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:33:24 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/19 23:09:22 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat bureaucrat("Juan Antonio", 150);
		Bureaucrat test("pingu", 11);
		Form	papele("PAPER", 140, 140);

		test.signForm(papele);
		std::cout << std::endl << papele << std::endl;
		std::cout << std::endl << bureaucrat << std::endl;


	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
		try
	{
		Bureaucrat	Juan("Juan Antonio", 140);
		Bureaucrat	boss("Boss", 1);
		Form		basicForm("Basic stuff", 140, 150);
		Form		basicForm2(basicForm);
		Form		advancedForm("Advanced stuff", 10, 1);
		
		std::cout << Juan << std::endl;
		std::cout << boss << std::endl;
		std::cout << basicForm << std::endl;
		std::cout << basicForm2 << std::endl;
		std::cout << advancedForm << std::endl << std::endl;
		
		Juan.signForm(basicForm);
		boss.signForm(basicForm2);
		Juan.signForm(advancedForm);

		boss.signForm(advancedForm);
		std::cout << std::endl
					<< basicForm << std::endl;
		std::cout << basicForm2 << std::endl;
		std::cout << advancedForm << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}
