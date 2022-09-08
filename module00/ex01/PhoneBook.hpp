#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

    public:

        size_t	total_contacts;
        size_t	idx_pointer;
		size_t	oldest;
        Contact	*contacts[8];
		// Contact contacts[8];

        PhoneBook( void );
        ~PhoneBook( void );
        
        void    add(Contact& contact);
        void    search(void);

	private:
		void	max_print(std::string string);
		bool	is_wrong_contact(Contact& contact);

};


#endif