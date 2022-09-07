
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact( void ) {

    // std::cout << "Contact Constructor called" << std::endl;
    return;
}

Contact::~Contact( void ) {
    // std::cout << "Contact destructor called" << std::endl;
    return;
}

// Overload the << operator. I will use this to print attributes of the objects
// std::ostream& operator<<(std::ostream &os, const Contact& contact) {

//     return os   << "("
//                 << contact.first_name << ", "
//                 << contact.last_name << ", "
//                 << contact.nick_name << ", "
//                 << contact.phone_number << ", "
//                 << contact.darkest_secret
//                 << ")";
// }

std::ostream& operator<<(std::ostream &os, const Contact& contact) {

    return os  	<< std::setw(18) << "First name:" << contact.first_name << "\n"
               	<< std::setw(18) << "Last name:" << contact.last_name << "\n"
              	<< std::setw(18)  << "Nick name:" << contact.nick_name << "\n"
              	<< std::setw(18) 	<< "Phone number:"  << contact.phone_number << "\n"
              	<< std::setw(18) 	<< "Darkest Secret:"  << contact.darkest_secret << "\n";
}