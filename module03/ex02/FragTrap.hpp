#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

	public:

		// Constructor and destructor
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();

		void	highFiveGuys(void);

};

#endif
