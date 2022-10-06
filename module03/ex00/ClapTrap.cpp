#include <iostream>
#include "ClapTrap.hpp"

// Constructor and Destructor
ClapTrap::ClapTrap():	_name(""),
						_hit_points(10),
						_energy_points(10),
						_attack_damage(0) {
	std::cout << "Constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name):	_name(name),
										_hit_points(10),
										_energy_points(10),
										_attack_damage(0) {
	
	std::cout << "Constructor called for " << this->_name << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called for " << this->_name << std::endl;
}

// Copy Constructor
ClapTrap::ClapTrap( const ClapTrap &claptrap ) {
	this->_name = claptrap._name;
	this->_hit_points = claptrap._hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_attack_damage = claptrap._attack_damage;
}

// Copy Assignment overload
ClapTrap& ClapTrap::operator=( const ClapTrap& rhs ) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return *this;
}

// Getters
std::string	ClapTrap::get_name( void ) const {
	return _name;
}

int	ClapTrap::get_hit_points( void ) const {
	return _hit_points;
}

int	ClapTrap::get_energy_points( void ) const {
	return _energy_points;
}

int	ClapTrap::get_attack_damage( void ) const {
	return _attack_damage;
}

// Setters
void	ClapTrap::set_hit_points(int amount) {
	if (amount < 0)
		this->_hit_points = 0;
	else
		this->_hit_points = amount;
}

void	ClapTrap::set_energy_points(int amount) {
	if (amount < 0)
		this->_energy_points = 0;
	else
		this->_energy_points = amount;
}

// Member functions
void	ClapTrap::attack(const std::string& target) {
	if (this->_hit_points == 0 || this->_energy_points == 0)
		return;
	this->set_energy_points(this->_energy_points - 1);
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hit_points == 0 || this->_energy_points == 0)
		return;
	this->set_hit_points(this->_hit_points - amount);
	std::cout << "ClapTrap " << this->_name << " took " << amount << " damage!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_hit_points == 0 || this->_energy_points == 0)
		return;
	this->set_hit_points(this->_hit_points + amount);
	this->set_energy_points(this->_energy_points - 1);
	std::cout << "ClapTrap " << this->_name << " repairs itself causing it to get " << amount << " hitpoints back!" << std::endl;
}

// Overload insertion operator
std::ostream& operator<<(std::ostream& os, const ClapTrap& claptrap) {
	std::cout << "name: " << claptrap.get_name() << std::endl;
	std::cout << "hit_points: " << claptrap.get_hit_points() << std::endl;
	std::cout << "energy_points: " << claptrap.get_energy_points() << std::endl;
	std::cout << "attack_damage: " << claptrap.get_attack_damage() << std::endl;

	return os;
}
