#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact( void ) {
}

Contact::~Contact( void ) {
    return;
}

void Contact::print_contact( void ) {

    std::cout << std::left << std::setw(18) << "First name:" << this->_first_name << std::endl;
	std::cout << std::left << std::setw(18) << "Last name:" << this->_last_name << std::endl;
	std::cout << std::left << std::setw(18) << "Nick name:" << this->_nick_name << std::endl;
	std::cout << std::left << std::setw(18) << "Phone number:"  << this->_phone_number << std::endl;
	std::cout << std::left << std::setw(18) << "Darkest Secret:"  << this->_darkest_secret << std::endl;
}

// Getters
std::string	Contact::get_first_name( void ) {
	return this->_first_name;
}

std::string Contact::get_last_name( void ) {
	return this->_last_name;
}

std::string Contact::get_nick_name( void ) {
	return this->_nick_name;
}

std::string Contact::get_phone_number( void ) {
	return this->_phone_number;
}

std::string Contact::get_darkest_secret( void ) {
	return this->_darkest_secret;
}

// Setters
void	Contact::set_first_name( std::string first_name ) {
	this->_first_name = first_name;
}

void	Contact::set_last_name( std::string last_name ) {
		this->_last_name = last_name;
}

void	Contact::set_nick_name( std::string nick_name ) {
		this->_nick_name = nick_name;
}

void	Contact::set_phone_number( std::string phone_number ) {
		this->_phone_number = phone_number;
}

void	Contact::set_darkest_secret( std::string darkest_secret ) {
		this->_darkest_secret = darkest_secret;
}