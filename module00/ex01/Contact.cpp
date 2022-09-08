
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact( void ) {

    std::cout << "Contact Constructor called" << std::endl;
    return;
}

Contact::~Contact( void ) {
    std::cout << "Contact destructor called" << std::endl;
    return;
}

void Contact::print_contact( void ) {

    std::cout << std::setw(18) << "First name:" << this->first_name << "\n";
	std::cout << std::setw(18) << "Last name:" << this->last_name << "\n";
	std::cout << std::setw(18) << "Nick name:" << this->nick_name << "\n";
	std::cout << std::setw(18) << "Phone number:"  << this->phone_number << "\n";
	std::cout << std::setw(18) << "Darkest Secret:"  << this->darkest_secret << "\n";
}
