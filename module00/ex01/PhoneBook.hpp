#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <ios>

# include "Contact.hpp"

class PhoneBook {

    public:

        PhoneBook( void );
        ~PhoneBook( void );
        
		void	add(std::string first_name,
					std::string last_name,
					std::string nick_name,
					std::string phone_number,
					std::string darkest_secret
					);
        void    search(void);
		size_t	get_total_contacts( void );

	private:

        size_t	_total_contacts;
        size_t	_idx_pointer;
		size_t	_oldest;
        Contact _contacts[8];

		void	_max_print(std::string string, );
		bool	_is_wrong_contact(Contact& contact);
		void	_print_contact(std::string index_str);

};


#endif