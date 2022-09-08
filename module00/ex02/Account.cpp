#include "Account.hpp"
#include <iostream>


Account::Account( int initial_deposit) : _amount(initial_deposit) {
	std::cout << "index:" << "amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account() {
}

int Account::_totalAmount = 0;

int Account::getTotalAmount( void ) {
	return _totalAmount;
}
