#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {

	public:

		// Constructors and destructors
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

		// Custom member functions 
		void	announce( void );

	private:
		std::string _name;
};


Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
