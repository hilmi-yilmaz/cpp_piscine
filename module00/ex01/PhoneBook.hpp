

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

    public:

        int     total_contacts;
        int     idx_pointer;
        Contact contacts[8];

        PhoneBook( void );
        ~PhoneBook( void );
        
        void    add(Contact& contact);
        void    search(void);

	private:
		void	max_print(std::string string);

};


#endif