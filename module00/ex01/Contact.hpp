#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {

    public:
        Contact( void );
        ~Contact( void );

		void	print_contact( void );

		// Getters
		std::string	get_first_name( void );
		std::string	get_last_name( void );
		std::string	get_nick_name( void );
		std::string	get_phone_number( void );
		std::string	get_darkest_secret( void );

		// Setters
		void	set_first_name( std::string first_name );
		void	set_last_name( std::string last_name );
		void	set_nick_name( std::string nick_name );
		void	set_phone_number( std::string phone_number );
		void	set_darkest_secret( std::string darkest_secret );

	private:
        std::string  _first_name;
        std::string  _last_name;
        std::string  _nick_name;
        std::string  _phone_number;
        std::string  _darkest_secret;
		
};

#endif