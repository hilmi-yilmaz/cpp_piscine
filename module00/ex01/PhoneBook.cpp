#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

    this->total_contacts = 0;
    this->idx_pointer = 0;
    // std::cout << "PhoneBook Constructor called" << std::endl;
    return;
}

PhoneBook::~PhoneBook( void ) {
    
    // std::cout << "PhoneBook Destructor called" << std::endl;
    return;
}

void	PhoneBook::add(Contact& contact) {

    this->contacts[this->idx_pointer] = contact;
    this->idx_pointer += 1;
    this->total_contacts += 1;
    return;
}

void	PhoneBook::max_print(std::string string) {

	char	buffer[11];

	buffer[10] = '\0';
	if ((int)string.length() - 10 > 0) {

		string.copy(buffer, 9, 0);
		buffer[9] = '.';
		std::cout << std::setw(10) << buffer;			
	}
	else {
		std::cout << std::setw(10) << std::left << string;
	}
}

void	PhoneBook::search(void) {

	std::cout << std::setw(10) << std::left << "index" << " | ";
	std::cout << std::setw(10) << std::left << "first name" << " | ";
	std::cout << std::setw(10) << std::left << "last name" << " | ";
	std::cout << std::setw(10) << std::left << "nickname" << std::endl;

	for (int i = 0; i < this->total_contacts; i++) {
		std::cout << std::setw(10) << std::left << i << " | ";
		this->max_print(this->contacts[i].first_name);
		std::cout << " | ";
		this->max_print(this->contacts[i].last_name);
		std::cout << " | ";
		this->max_print(this->contacts[i].nick_name);
		std::cout << std::endl;
	}
}
