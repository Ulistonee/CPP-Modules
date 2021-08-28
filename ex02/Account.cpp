#include "Account.hpp"
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>

Account::Account( int initial_deposit )
{
	_accountIndex = indx++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

static void			Account::_displayTimestamp() {
	time_t time_in_sec;
	struct tm *current_date;
	char	buffer[80];

	time(&time_in_sec);
	current_date = localtime(&time_in_sec);
	strftime (buffer,80,"[%Y%m%d_%H%M%S]", current_date);
	std::cout << buffer;
}

static void			Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts
			  << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits
			  << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount <<
			  ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}




