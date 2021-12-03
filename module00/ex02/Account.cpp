#include "Account.hpp"
#include <time.h>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	(void)initial_deposit;
	return ;
}

Account::~Account( void )
{
	return ;
}

void	print_time( void )
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
	std::cout << "lolo" << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	(void)deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const
{
	print_time();
	std::cout << " index:" << _accountIndex;
	std::cout << std::endl << this->_nbDeposits << " -- " << this->_nbWithdrawals << std::endl;
	if (this->_nbDeposits == 0 && this->_nbWithdrawals == 0)
		std::cout << ";amount:" << this->_amount << ";created";
	std::cout << std::endl;
	return ;
}
