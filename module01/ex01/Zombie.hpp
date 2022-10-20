#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {

	public:

		void	announce( void );
		void	set_name( std::string name );
		
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

	private:

		std::string _name;

};

#endif
