#include <iostream>
#include "FragTrap.hpp"

// Constructor and destructor
FragTrap::FragTrap(): ClapTrap() {
	std::cout << "FragTrap constructor called for " << this->_name << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << "FragTrap constructor called for " << this->_name << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

void	FragTrap::highFiveGuys() {
	if (this->_hit_points == 0 || this->_energy_points == 0)
		return;
	std::cout << this->_name << " displays a positive high five request!" << std::endl;
}
