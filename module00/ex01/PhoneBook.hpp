#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

    public:

        PhoneBook( void );
        ~PhoneBook( void );
        
        void    add(Contact& contact);
        void    search(void);
		size_t	get_total_contacts( void );

	private:

        size_t	_total_contacts;
        size_t	_idx_pointer;
		size_t	_oldest;
        Contact	*_contacts[8];

		void	_max_print(std::string string);
		bool	_is_wrong_contact(Contact& contact);
		void	_print_contact(std::string index_str);

};


#endif