#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::_displayTimestamp(void)
{
	time_t timestamp = time(NULL);
	struct tm datatime = *localtime(&timestamp);

	std::cout << "[";
	std::cout << datatime.tm_year + 1900;
	std::cout << "0" << datatime.tm_mon + 1;
	std::cout << datatime.tm_mday;
	std::cout << "_";

	std::cout << datatime.tm_hour;
	std::cout << datatime.tm_min;
	std::cout << datatime.tm_sec;
	std::cout << "] ";
}

Account::Account(void) {}

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	this->_accountIndex = _nbAccounts++;
	_totalAmount += this->_amount;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";created" << std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
	<< ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals
	<< std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount
	<< ";deposit:" << deposit;

	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout << ";amount:" << this->_amount
	<< ";nb_deposits:" << this->_nbDeposits
	<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount;

	if (this->_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	std::cout << ";withdrawal:" << withdrawal
	<< ";amount:" << this->_amount
	<< ";nb_withdrawals:" << this->_nbWithdrawals
	<< std::endl;

	return true;
}

int Account::checkAmount(void) const
{
	return this->_amount;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";closed"
	<< std::endl;
}
