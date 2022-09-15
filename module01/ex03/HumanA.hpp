#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA {

	public:

		Weapon&		weapon;
		std::string	name;

		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void	attack( void );

};

#endif
