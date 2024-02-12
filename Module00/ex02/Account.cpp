/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:36:13 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/12 23:36:48 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account()
{
	Account(0);
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	
	Account::_displayTimestamp();
	std::cout
		<< "index:"<< this->_accountIndex
		<< ";amount:" << this->_amount 
		<< ";created" << std::endl;
}
Account::~Account( void )
{
	this->_displayTimestamp();
	std::cout << "index:"<< this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout
		<< "accounts:" << Account::getNbAccounts()
		<< ";total:" << Account::getTotalAmount()
		<< ";deposits:" << Account::getNbDeposits()
		<< ";withdrawals:" << Account::getNbWithdrawals()
		<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	displayStatus();
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	this->_displayTimestamp();
	std::cout 
		<< "index:" << this->_accountIndex 
		<< ";p_amount" << this->_amount
		<< ";withdrawal:";
	if (withdrawal > this->_amount)
		std::cout << "refused" << std::endl;
	else
	{
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout
			<< withdrawal
			<< ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbWithdrawals
			<< std::endl;
		return (1);
	}
	return (0);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t t = std::time(NULL);  // Get current time as a std::time_t object

	std::tm now = *std::localtime(&t);  // Convert std::time_t to std::tm structure representing local time

	std::cout
	<< "["
	<< (now.tm_year + 1900)  // Year since 1900, so add 1900 to get current year
	<< std::setfill('0')  // Set fill character for setw
	<< std::setw(2) << now.tm_mon + 1  // Month (0-based), so add 1
	<< std::setw(2) << now.tm_mday  // Day of the month
	<< "_"
	<< std::setw(2) << now.tm_hour  // Hour
	<< std::setw(2) << now.tm_min  // Minute
	<< std::setw(2) << now.tm_sec  // Second
	<< "] ";
}
