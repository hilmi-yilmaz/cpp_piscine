#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB {

	public:

		std::string	name;

		HumanB( std::string name );
		~HumanB();

		void	attack( void );
		void	setWeapon( Weapon *weapon );

	private:
		Weapon		*weapon;


};

#endif
