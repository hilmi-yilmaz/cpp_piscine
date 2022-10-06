#include <iostream>
#include "ScavTrap.hpp"

// Constructor and destructor
ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap constructor called for " << this->_name << std::endl;
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

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called for " << this->_name << std::endl;
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
