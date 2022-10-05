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

	// // Check for empty inputs
	// if (this->_is_wrong_contact(contact))
	// {
	// 	std::cout << "One or more input fields are incorrect. Contact is not saved in the phonebook." << std::endl;
	// 	return;
	// }

	// Add new contact
	this->_contacts[this->_oldest].first_name = first_name;
	this->_contacts[this->_oldest].last_name = last_name;
	this->_contacts[this->_oldest].nick_name = nick_name;
	this->_contacts[this->_oldest].phone_number = phone_number;
	this->_contacts[this->_oldest].darkest_secret = darkest_secret;

	this->_oldest++;
	if (this->_oldest == 8)
		this->_oldest = 0;

	if (this->_total_contacts != 8)
		this->_total_contacts++;

	// // Check if the phonebook is full: if so, oldest person gets replaced by new contact
	// if (this->_total_contacts == 8) {



	// 	// Set the _oldest index pointer to oldest contact
	// 	if (this->_oldest == 7) {
	// 		this->_oldest = 0;
	// 	} else {
	// 		this->_oldest += 1;
	// 	}
	// }
	// else {
	// 	this->_contacts[this->_idx_pointer] = &contact;
	// 	this->_idx_pointer += 1;
	// 	this->_total_contacts += 1;
	// }
	std::cout << "Contact added to phonebook!" << std::endl;
}

void	PhoneBook::search(void) {

	std::ios_base&	align = std::right;

	std::cout << std::setw(10) << std::right << "index" << "|";
	std::cout << std::setw(10) << std::right << "first name" << "|";
	std::cout << std::setw(10) << std::right << "last name" << "|";
	std::cout << std::setw(10) << std::right << "nickname" << std::endl;

	for (size_t i = 0; i < this->_total_contacts; i++) {
		std::cout << std::setw(10) << std::right << i << "|";
		this->_max_print(this->_contacts[i].first_name);
		std::cout << "|";
		this->_max_print(this->_contacts[i].last_name);
		std::cout << "|";
		this->_max_print(this->_contacts[i].nick_name);
		std::cout << std::endl;
	}

	std::string	index_str;
	std::cout << "Choose an index: ";
	getline(std::cin, index_str);

	this->_print_contact(index_str);

}

void	PhoneBook::_max_print(std::string string, std::ios_base& align) {

	char	buffer[11];

	buffer[10] = '\0';
	if ((int)string.length() - 10 > 0) {

		string.copy(buffer, 9, 0);
		buffer[9] = '.';
		std::cout << std::setw(10) << buffer;			
	}
	else {
		std::cout << std::setw(10) << align << string;
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
	if (index_int < 0 || (this->_total_contacts != 8 && index_int >= (int)this->_oldest)) {
		std::cout << "The index does not exist in the phonebook! Try another one." << std::endl;
	} else {
		this->_contacts[index_int].print_contact();
	}
}
