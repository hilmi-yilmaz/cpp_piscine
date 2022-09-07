#include <iostream>
#include "PhoneBook.hpp"

int main() {
    PhoneBook   phonebook;


    Contact     contact;
    contact.first_name = "hilmicodamamsterdam";
    contact.last_name = "yilmaz";
    contact.nick_name = "gilmi";
    contact.phone_number = "0611223344";
    contact.darkest_secret = "yo";
    // std::cout << "Contact: " << contact << std::endl;
    // std::cout << &contact << std::endl;

    phonebook.add(contact);

    Contact     contact2;
    contact2.first_name = "Ayse";
    contact2.last_name = "yilmazutrecht";
    contact2.nick_name = "Aysegul";
    contact2.phone_number = "0699999999";
    contact2.darkest_secret = "neef";
    // std::cout << "Contact: " << contact << std::endl;
    // std::cout << &contact2 << std::endl;

    phonebook.add(contact2);

    // for (int i = 0; i < phonebook.total_contacts; i++) {
    //     std::cout << phonebook.contacts[i] << std::endl;
	// 	// std::cout << &(phonebook.contacts[i]) << std::endl;
    // }

	phonebook.search();

    return 0;
}