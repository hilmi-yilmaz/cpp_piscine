#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {

	public:

		void	announce( void );

		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

	private:

		std::string name;

};

#endif
