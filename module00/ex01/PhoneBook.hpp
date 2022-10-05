#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <ios>
# include "Contact.hpp"

class PhoneBook {

    public:

        PhoneBook( void );
        ~PhoneBook( void );
        
		// Getters
		size_t		get_total_contacts( void );

		void		add(std::string first_name,
						std::string last_name,
						std::string nick_name,
						std::string phone_number,
						std::string darkest_secret
					);
        void    	search(void);
		std::string	ask_user_info( std::string prompt );


	private:

        size_t	_total_contacts;
        size_t	_idx_pointer;
		size_t	_oldest;
        Contact _contacts[8];

		void	_max_print(std::string string);
		void	_print_contact(std::string index_str);
		bool	_is_empty_string( std::string str );
		
};


#endif