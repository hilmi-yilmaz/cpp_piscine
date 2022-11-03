#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

	public:

		// Constructor and destructor
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		~FragTrap();

		// Copy Assignment operator overload
		FragTrap&	operator=(const FragTrap& rhs);

		void	highFiveGuys(void);

};

#endif
