/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:31:16 by yrabby            #+#    #+#             */
/*   Updated: 2023/03/21 14:08:44 by yrabby           ###   ########.fr       */
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

void	print_timestamp(void)
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
	++Account::_nbAccounts;
	print_timestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{

}

int	Account::getNbAccounts( void )
{
	return 0;
}

int	Account::getTotalAmount( void )
{
	return 0;
}

int	Account::getNbDeposits( void )
{
	return 0;
}

int	Account::getNbWithdrawals( void )
{
	return 0;
}

void	Account::displayAccountsInfos( void )
{

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
