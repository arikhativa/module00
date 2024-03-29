/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:31:16 by yrabby            #+#    #+#             */
/*   Updated: 2023/03/21 17:06:34 by yrabby           ###   ########.fr       */
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
	_totalAmount += initial_deposit;
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
	++_nbDeposits;
	++_totalNbDeposits;
	_amount += deposit;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout 
		<< "index:" << _accountIndex 
		<< ";p_amount:" << (_amount - deposit)
		<< ";deposit:" << deposit 
		<< ";amount:" << _amount 
		<< ";nb_deposits:" << _nbDeposits 
		<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout 
			<< "index:" << _accountIndex 
			<< ";p_amount:" << _amount
			<< ";withdrawal:refused"
			<< std::endl;
			return false;
	}
	++_nbWithdrawals;
	++_totalNbWithdrawals;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout 
		<< "index:" << _accountIndex 
		<< ";p_amount:" << (_amount + withdrawal)
		<< ";withdrawal:" << withdrawal 
		<< ";amount:" << _amount 
		<< ";nb_withdrawals:" << _nbWithdrawals 
		<< std::endl;
	return true;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout 
		<< "index:" << _accountIndex 
		<< ";amount:" << _amount 
		<< ";deposits:" << _nbDeposits 
		<< ";withdrawals:" << _nbWithdrawals 
		<< std::endl;
}
