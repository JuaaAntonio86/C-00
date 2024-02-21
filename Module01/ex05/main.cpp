/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:00:30 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/21 23:33:29 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl	harl;

	if (argc == 2)
		harl.complain(argv[1]);
	else
	{
		std::cerr << "Usage: ./Harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return (1);
	}
	return (0);
}