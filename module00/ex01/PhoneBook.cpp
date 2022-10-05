#include <iostream>
#include <iomanip>
#include <cctype>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

    this->_total_contacts = 0;
    this->_idx_pointer = 0;
	this->_oldest = 0;
	std::memset(this->_contacts, 0, sizeof(this->_contacts));
    return;
}

PhoneBook::~PhoneBook( void ) {
    return;
}

size_t	PhoneBook::get_total_contacts(void) {
	return _total_contacts;
}

void	PhoneBook::add(std::string first_name,
						std::string last_name,
						std::string nick_name,
						std::string phone_number,
						std::string darkest_secret
						) {

	// Add new contact
	this->_contacts[this->_oldest].set_first_name(first_name);
	this->_contacts[this->_oldest].set_last_name(last_name);
	this->_contacts[this->_oldest].set_nick_name(nick_name);
	this->_contacts[this->_oldest].set_phone_number(phone_number);
	this->_contacts[this->_oldest].set_darkest_secret(darkest_secret);

	this->_oldest++;
	if (this->_oldest == 8)
		this->_oldest = 0;

	if (this->_total_contacts != 8)
		this->_total_contacts++;
	std::cout << "Contact added to phonebook!" << std::endl;
}

void	PhoneBook::search(void) {

	std::cout << std::setw(10) << std::right << "index" << "|";
	std::cout << std::setw(10) << std::right << "first name" << "|";
	std::cout << std::setw(10) << std::right << "last name" << "|";
	std::cout << std::setw(10) << std::right << "nickname" << std::endl;

	for (size_t i = 0; i < this->_total_contacts; i++) {
		std::cout << std::setw(10) << std::right << i << "|";
		this->_max_print(this->_contacts[i].get_first_name());
		std::cout << "|";
		this->_max_print(this->_contacts[i].get_last_name());
		std::cout << "|";
		this->_max_print(this->_contacts[i].get_nick_name());
		std::cout << std::endl;
	}

	std::string	index_str;
	std::cout << "Choose an index: ";
	getline(std::cin, index_str);

	this->_print_contact(index_str);
}

std::string	PhoneBook::ask_user_info( std::string prompt ) {

	std::string	info;

	while (true) {

		std::cout << prompt << ": ";
		std::getline(std::cin, info);
		if (!_is_empty_string(info)) {
			break ;
		} else {
			std::cout << "Cannot continue with empty input. Try again." << std::endl;
		}
	}
	return info;
}

void	PhoneBook::_max_print(std::string string) {

	char	buffer[11];

	buffer[10] = '\0';
	if ((int)string.length() - 10 > 0) {

		string.copy(buffer, 9, 0);
		buffer[9] = '.';
		std::cout << std::setw(10) << buffer;
		return;		
	}
	std::cout << std::setw(10) << std::right << string;
}

void	PhoneBook::_print_contact(std::string index_str) {

	// Check that index only consists of digits
	bool	is_only_digits = true;
	for (unsigned i = 0; i < index_str.size(); i++) {
		if (std::isdigit(index_str[i]) == 0)
			is_only_digits = false;
	}
	if (is_only_digits == false) {
		std::cout << "The index has to consist of digits only!" << std::endl;
		return;
	}

	// Check that the index_str is not empty
	if (index_str.empty()) {
		std::cout << "The index is empty." << std::endl;
		return;
	}

	int	index_int;
	index_int = std::atoi(index_str.c_str());

	// Check whether the index exists
	if (index_int < 0 || (this->_total_contacts != 8 && index_int >= (int)this->_oldest)) {
		std::cout << "The index does not exist in the phonebook!" << std::endl;
	} else {
		this->_contacts[index_int].print_contact();
	}
}

bool	PhoneBook::_is_empty_string( std::string str ) {
	if (str.find_first_not_of(" \t") != std::string::npos && !str.empty())
		return false;
	return true;
}
