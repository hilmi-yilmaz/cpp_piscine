#include "Account.hpp"
#include <iostream>


Account::Account( int initial_deposit) : _amount(initial_deposit) {

	////////////////////////
	// INSTANCE VARIABLES //
	////////////////////////

	// Set account index
	static int	index = 0;
	_accountIndex = index;
	index++;

	_amount = initial_deposit;

	/////////////////////
	// CLASS VARIABLES //
	/////////////////////

	// Set total amount
	_totalAmount = _totalAmount + initial_deposit;

	// Set number of accounts
	_nbAccounts++;

	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;

}

Account::~Account() {
}

int Account::_totalAmount = 0;
int Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


int Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const {
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {


	int	p_amount = _amount;

	_amount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	_totalAmount += deposit;

	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}