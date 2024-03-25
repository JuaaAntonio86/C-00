/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:33:24 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/25 17:27:11 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat bureaucrat("Juan Antonio", 150);
		Bureaucrat test("pingu", 11);
		AForm	papele("PAPER", 140, 140);

		test.signAForm(papele);
		std::cout << std::endl << papele << std::endl;
		std::cout << std::endl << bureaucrat << std::endl;


	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
		try
	{
		Bureaucrat	Juan("Juan Antonio", 140);
		Bureaucrat	boss("Boss", 1);
		AForm		basicAForm("Basic stuff", 140, 150);
		AForm		basicAForm2(basicAForm);
		AForm		advancedAForm("Advanced stuff", 10, 1);
		
		std::cout << Juan << std::endl;
		std::cout << boss << std::endl;
		std::cout << basicAForm << std::endl;
		std::cout << basicAForm2 << std::endl;
		std::cout << advancedAForm << std::endl << std::endl;
		
		Juan.signAForm(basicAForm);
		boss.signAForm(basicAForm2);
		Juan.signAForm(advancedAForm);

		boss.signAForm(advancedAForm);
		std::cout << std::endl
					<< basicAForm << std::endl;
		std::cout << basicAForm2 << std::endl;
		std::cout << advancedAForm << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}
