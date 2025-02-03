/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:28:59 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/18 09:59:31 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = this->getNbAccounts();
    this->_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout<<"index:" << this->_accountIndex << ";amount:" << this->checkAmount() << ";created" << std::endl;
    this->_nbAccounts++;
}

Account::~Account(void)
{
    Account::_displayTimestamp();
    std::cout<<"index:" << this->_accountIndex << ";amount:" << this->checkAmount() << ";closed" << std::endl;
    this->_nbAccounts--;
}

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}
int Account::checkAmount(void) const
{
    return (this->_amount);
}

void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount();
    std::cout << ";disposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
    std::cout << ";disposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t	now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}

void Account::makeDeposit(int desposit)
{
    this->_nbDeposits++;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";desposit:" << desposit << ";amount" << this->_amount + desposit;
    std::cout << ";nb_deposits : " << this->_nbDeposits << std::endl ;
    this->_amount +=desposit;
    Account::_totalAmount +=desposit;
    Account::_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount" << Account::_amount << ";withdrawal"; 
    if (withdrawal > this->checkAmount())
    {
        std::cout << ";refused" << std::endl;
        return (false);
    }
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    std::cout << withdrawal << ";amount:" << this->checkAmount() - withdrawal << ";nb_withdrawals:" << this->_nbWithdrawals << std :: endl;
    this->_amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    return (true);
}
