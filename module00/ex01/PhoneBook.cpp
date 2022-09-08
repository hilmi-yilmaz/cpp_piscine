#include <iostream>
#include <iomanip>
#include <cctype>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

    this->total_contacts = 0;
    this->idx_pointer = 0;
	this->oldest = 0;
	std::memset(this->contacts, 0, sizeof(this->contacts));

    // std::cout << "PhoneBook Constructor called" << std::endl;
    return;
}

PhoneBook::~PhoneBook( void ) {
    
    // std::cout << "PhoneBook Destructor called" << std::endl;
    return;
}

void	PhoneBook::add(Contact& contact) {

	// Check for empty inputs
	if (this->is_wrong_contact(contact))
	{
		std::cout << "One or more input fields are incorrect. Contact is not saved in the phonebook." << std::endl;
		return;
	}

	// Check if the phonebook is full: if so, oldest person gets replaced by new contact
	if (this->total_contacts == 8) {
		this->contacts[this->oldest] = &contact;
		if (this->oldest == 7) {
			this->oldest = 0;
		} else {
			this->oldest += 1;
		}
	}
	else {
		this->contacts[this->idx_pointer] = &contact;
		this->idx_pointer += 1;
		this->total_contacts += 1;
	}
	std::cout << "Contact added to phonebook!" << std::endl;
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

bool	is_empty_input(std::string string) {

	for (std::string::size_type i = 0; i < string.size(); i++) {
		if (isspace(string[i]) == false)
			return (false);
	}
	return (true);
}

bool	PhoneBook::is_wrong_contact(Contact& contact) {

	if (is_empty_input(contact.first_name) ||
		is_empty_input(contact.last_name) ||
		is_empty_input(contact.nick_name) ||
		is_empty_input(contact.phone_number) ||
		is_empty_input(contact.darkest_secret))
		return (true);
	return (false);
}

void	PhoneBook::search(void) {

	std::cout << std::setw(10) << std::left << "index" << " | ";
	std::cout << std::setw(10) << std::left << "first name" << " | ";
	std::cout << std::setw(10) << std::left << "last name" << " | ";
	std::cout << std::setw(10) << std::left << "nickname" << std::endl;

	for (size_t i = 0; i < this->total_contacts; i++) {
		std::cout << std::setw(10) << std::left << i << " | ";
		this->max_print(this->contacts[i]->first_name);
		std::cout << " | ";
		this->max_print(this->contacts[i]->last_name);
		std::cout << " | ";
		this->max_print(this->contacts[i]->nick_name);
		std::cout << std::endl;
	}
}
