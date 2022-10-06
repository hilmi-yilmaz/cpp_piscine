#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

	public:

		// Constructor and destructor
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();

		void	guardGate();
		void	attack(const std::string& target);

};

#endif
