#include <iostream>
#include "ScavTrap.hpp"

// Constructor and destructor
ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "Constructor called for " << this->_name << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	std::cout << "ScavTrap constructor called for " << this->_name << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called for " << this->_name << std::endl;
}

// Copy assignment operator overload
ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs) {
	std::cout << "ScavTrap Copy Assignment operator called" << std::endl;
	if (this == &rhs)
		return *this;

	this->_name = rhs.get_name();
	this->_hit_points = rhs.get_hit_points();
	this->_energy_points = rhs.get_energy_points();
	this->_attack_damage = rhs.get_attack_damage();
	return *this;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_hit_points == 0 || this->_energy_points == 0)
		return;
	this->set_energy_points(this->_energy_points - 1);
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() {
	if (this->_hit_points == 0 || this->_energy_points == 0)
		return;
	std::cout << this->_name << " is now in Gate keeper mode!" << std::endl;
}
