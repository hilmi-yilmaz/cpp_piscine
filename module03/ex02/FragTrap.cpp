#include <iostream>
#include "FragTrap.hpp"

// Constructor and destructor
FragTrap::FragTrap(): ClapTrap() {
	std::cout << "FragTrap constructor called for " << this->_name << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << "FragTrap Parametrized constructor called for " << this->_name << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other) {
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

// Copy Assignment operator overload
FragTrap&	FragTrap::operator=(const FragTrap& rhs) {
	std::cout << "Copy Assignment operator overload called" << std::endl;
	if (this == &rhs)
		return *this;

	this->_name = rhs.get_name();
	this->_hit_points = rhs.get_hit_points();
	this->_energy_points = rhs.get_energy_points();
	this->_attack_damage = rhs.get_attack_damage();
	return *this;
}

void	FragTrap::highFiveGuys() {
	if (this->_hit_points == 0 || this->_energy_points == 0)
		return;
	std::cout << this->_name << " displays a positive high five request!" << std::endl;
}
