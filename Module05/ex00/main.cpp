/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:33:24 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/18 19:03:11 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat bureaucrat("Juan Antonio", 1);
	
		std::cout << bureaucrat << std::endl;

		bureaucrat.incrementGrade();
	
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat bureaucrat("Juan Antonio", 150);
		Bureaucrat test("pingu", 11);

		std::cout << std::endl << bureaucrat << std::endl;
		std::cout << std::endl << test << std::endl;

		test = bureaucrat;
		std::cout << std::endl << test << std::endl;
		test.incrementGrade();
		std::cout << std::endl << bureaucrat << std::endl;
		std::cout << std::endl << test << std::endl;
		test.decrementGrade();
		std::cout << std::endl << bureaucrat << std::endl;
		std::cout << std::endl << test << std::endl;
		
		bureaucrat.decrementGrade();
	
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}
