#include "Account.hpp"
#include <time.h>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	std::string	buff;
	time_t		rawtime;
	int			sec;
	int			min;
	int			hour;
	int			day;
	int			mon;
	int			year;

	time(&rawtime);
	tm *tm_local = localtime(&rawtime);
	sec = tm_local->tm_sec;
	min = tm_local->tm_min;
	hour = tm_local->tm_hour;
	day = tm_local->tm_mday;
	mon = tm_local->tm_mon;
	year = tm_local->tm_year;
	std::cout << "[" << year + 1900 << mon;
	if (day < 10)
		std::cout << '0';
	std::cout << day << "_";
	if (hour < 10)
		std::cout << '0';
	std::cout << hour;
	if (min < 10)
		std::cout << '0';
	std::cout << min;
	if (sec < 10)
		std::cout << '0';
	std::cout << sec << "]";
	return ;
}

Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << this->_amount << ";created";
	std::cout << std::endl;
	return ;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << this->_amount << ";closed";
	std::cout << std::endl;
	return ;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	std::cout << ";deposits:" << deposit << ";amount:" << this->_amount;		
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << this->_amount << ";withdrawal:";
	if (withdrawal < this->_amount)
		std::cout << withdrawal;
	else
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	std::cout << ";amount" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;		
	std::cout << std::endl;
	return ;
}
