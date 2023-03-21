/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:31:16 by yrabby            #+#    #+#             */
/*   Updated: 2023/03/21 14:21:41 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <ctime>
#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	std::time_t rawtime;
    std::tm* timeinfo;
    char buffer [80];

    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);

    std::strftime(buffer,80,"%Y%m%d_%H%M%S",timeinfo);
	std::cout << "[" << buffer << "] ";
}

Account::Account(int initial_deposit) : 
	_accountIndex(_nbAccounts), 
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	++_nbAccounts;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{
	--_nbAccounts;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout
		<< "accounts:" << getNbAccounts() 
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals()
		<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	(void)deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	return true;
}

int		Account::checkAmount( void ) const
{
	return 0;
}

void	Account::displayStatus( void ) const
{
	
}
