/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:59:22 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/21 23:40:59 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::debug( void )
{
	std::cout
		<< "DEBUG:" << std::endl
		<< "I love having extra bacon for my 7XL-double-cheese-triple-"
		<< "pickle-specialketchup burger. I really do!"
		<< std::endl;
}

void	Harl::info( void )
{
	std::cout
		<< "INFO:" << std::endl
		<< "I cannot believe adding extra bacon costs more money. You didn't put"
		<< "enough bacon in my burger! If you did, I wouldn't be asking for more!"
		<< std::endl;
}

void	Harl::warning( void )
{
	std::cout
		<< "WARNING:" << std::endl
		<< "I think I deserve to have some extra bacon for free. I've been coming "
		<< "for years whereas you started working here since last month."
		<< std::endl;
}

void	Harl::error( void )
{
	std::cout
		<< "ERROR:" << std::endl
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void	Harl::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*ptr_to_member[4])(void) = \
				{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*ptr_to_member[i])();
			break;
		}
		else if (i == 3)
		{
			std::cerr << "Usage: ./Harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
			return ;
		}
	}
	return ;
}