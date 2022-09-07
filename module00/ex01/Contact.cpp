
#include <iostream>
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

    return os   << "("
                << contact.first_name << ", "
                << contact.last_name << ", "
                << contact.nick_name << ", "
                << contact.phone_number << ", "
                << contact.darkest_secret
                << ")";
}