#include <iostream>
#include <string>
#include <cstdlib>
#include "PhoneBook.hpp"

int main() {

    PhoneBook   phonebook;

    Contact     contact;
    contact.first_name = "hilmicodamamsterdam";
    contact.last_name = "yilmaz";
    contact.nick_name = "gilmi";
    contact.phone_number = "0611223344";
    contact.darkest_secret = "yo";
    phonebook.add(contact);

    Contact     contact1;
    contact1.first_name = "Ayse";
    contact1.last_name = "yilmazutrecht";
    contact1.nick_name = "Aysegul";
    contact1.phone_number = "0699999999";
    contact1.darkest_secret = "neef";
    phonebook.add(contact1);

    Contact     contact2;
    contact2.first_name = "2";
    contact2.last_name = "2";
    contact2.nick_name = "2";
    contact2.phone_number = "2";
    contact2.darkest_secret = "2";
    phonebook.add(contact2);

    Contact     contact3;
    contact3.first_name = "3";
    contact3.last_name = "3";
    contact3.nick_name = "3";
    contact3.phone_number = "3";
    contact3.darkest_secret = "3";
    phonebook.add(contact3);

    Contact     contact4;
    contact4.first_name = "4";
    contact4.last_name = "4";
    contact4.nick_name = "4";
    contact4.phone_number = "4";
    contact4.darkest_secret = "4";
    phonebook.add(contact4);

    Contact     contact5;
    contact5.first_name = "5";
    contact5.last_name = "5";
    contact5.nick_name = "5";
    contact5.phone_number = "5";
    contact5.darkest_secret = "5";
    phonebook.add(contact5);

    Contact     contact6;
    contact6.first_name = "6";
    contact6.last_name = "6";
    contact6.nick_name = "6";
    contact6.phone_number = "6";
    contact6.darkest_secret = "6";
    phonebook.add(contact6);

    Contact     contact7;
    contact7.first_name = "7";
    contact7.last_name = "7";
    contact7.nick_name = "7";
    contact7.phone_number = "7";
    contact7.darkest_secret = "7";
    phonebook.add(contact7);

	std::cout << "Enter ADD, SEARCH or EXIT\n";
	while (true) {
		
		// Save the user input
		std::string input;
		std::getline(std::cin, input);

		if (input == "ADD") {

			Contact new_contact;

			std::cout << "first name: ";
			std::getline(std::cin, new_contact.first_name);

			std::cout << "last name: ";
			std::getline(std::cin, new_contact.last_name);

			std::cout << "nick name: ";
			std::getline(std::cin, new_contact.nick_name);

			std::cout << "phone number: ";
			std::getline(std::cin, new_contact.phone_number);

			std::cout << "darkest secret: ";
			std::getline(std::cin, new_contact.darkest_secret);

			phonebook.add(new_contact);

		} else if (input == "SEARCH") {

			phonebook.search();

		} else if (input == "EXIT") {
			break;
		} else if (std::cin.eof()) {
			return 0;
		}
		else {
			std::cout << "Did not understand your command. Try ADD, SEARCH or EXIT." << std::endl;
		}

	}
    return 0;
}