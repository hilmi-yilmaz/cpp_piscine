#include <iostream>
#include <string>
#include <cstdlib>
#include "PhoneBook.hpp"

int main() {

    PhoneBook   phonebook;

	while (true) {
		std::cout << "Enter ADD, SEARCH or EXIT\n";

		// Save the user input
		std::string input;
		std::getline(std::cin, input);

		if (input == "ADD") {
			
			// Ask for user input
			std::string	first_name = phonebook.ask_user_info("first name");
			std::string	last_name = phonebook.ask_user_info("last name");
			std::string	nick_name = phonebook.ask_user_info("nick name");
			std::string	phone_number = phonebook.ask_user_info("phone number");
			std::string	darkest_secret = phonebook.ask_user_info("darkest secret");

			phonebook.add(first_name,
							last_name,
							nick_name,
							phone_number,
							darkest_secret);

		} else if (input == "SEARCH") {
			phonebook.search();
		} else if (input == "EXIT") {
			break;
		} else if (std::cin.eof()) {
			std::exit(0);
		}
		else {
			std::cout << "Did not understand your command. Try ADD, SEARCH or EXIT." << std::endl;
		}

	}
    return 0;
}