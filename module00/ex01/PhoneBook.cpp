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

void	PhoneBook::add(Contact& contact) {

	// Check for empty inputs
	if (this->_is_wrong_contact(contact))
	{
		std::cout << "One or more input fields are incorrect. Contact is not saved in the phonebook." << std::endl;
		return;
	}

	// Check if the phonebook is full: if so, oldest person gets replaced by new contact
	if (this->_total_contacts == 8) {
		this->_contacts[this->_oldest] = &contact;
		if (this->_oldest == 7) {
			this->_oldest = 0;
		} else {
			this->_oldest += 1;
		}
	}
	else {
		this->_contacts[this->_idx_pointer] = &contact;
		this->_idx_pointer += 1;
		this->_total_contacts += 1;
	}
	std::cout << "Contact added to phonebook!" << std::endl;
}

void	PhoneBook::search(void) {

	std::cout << std::setw(10) << std::left << "index" << " | ";
	std::cout << std::setw(10) << std::left << "first name" << " | ";
	std::cout << std::setw(10) << std::left << "last name" << " | ";
	std::cout << std::setw(10) << std::left << "nickname" << std::endl;

	for (size_t i = 0; i < this->_total_contacts; i++) {
		std::cout << std::setw(10) << std::left << i << " | ";
		this->_max_print(this->_contacts[i]->first_name);
		std::cout << " | ";
		this->_max_print(this->_contacts[i]->last_name);
		std::cout << " | ";
		this->_max_print(this->_contacts[i]->nick_name);
		std::cout << std::endl;
	}

	std::string	index_str;
	std::cout << "Choose an index: ";
	getline(std::cin, index_str);

	this->_print_contact(index_str);

}

void	PhoneBook::_max_print(std::string string) {

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

bool	is_empty_input(std::string string) {

	for (std::string::size_type i = 0; i < string.size(); i++) {
		if (isspace(string[i]) == false)
			return (false);
	}
	return (true);
}

bool	PhoneBook::_is_wrong_contact(Contact& contact) {

	if (is_empty_input(contact.first_name) ||
		is_empty_input(contact.last_name) ||
		is_empty_input(contact.nick_name) ||
		is_empty_input(contact.phone_number) ||
		is_empty_input(contact.darkest_secret))
		return (true);
	return (false);
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
	if (index_int < 0 || index_int >= (int)this->_idx_pointer) {
		std::cout << "The index does not exist in the phonebook! Try another one." << std::endl;
	} else {
		this->_contacts[index_int]->print_contact();
	}
}
