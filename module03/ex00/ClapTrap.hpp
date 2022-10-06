#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap {

	private:
		std::string		_name;
		int				_hit_points;
		int				_energy_points;
		int				_attack_damage;

	public:

		// Constructor and Destructor
		ClapTrap();
		ClapTrap( std::string name );
		~ClapTrap();

		// Copy constructor
		ClapTrap( const ClapTrap& claptrap);

		// Copy assignment
		ClapTrap&	operator=( const ClapTrap& rhs );



		// Getters
		std::string		get_name( void ) const;
		int				get_hit_points( void ) const;
		int				get_energy_points( void ) const;
		int				get_attack_damage( void ) const;

		// Setters
		void			set_hit_points(int amount);
		void			set_energy_points(int amount);



		// Member functions
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};

std::ostream& operator<<(std::ostream& os, const ClapTrap& claptrap);

#endif
