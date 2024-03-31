#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    this->hit_p = 100;
    this->energy_p = 50;
    this->at_dmg = 20;
    std::cout << "Called ScavTrap constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Called ScavTrap Deconstructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& fix)
{
    std::cout << "Copy ScavTrap constructor called" << std::endl;
    this->setname(fix.getname() + "_copy");
    this->hit_p = fix.gethit_p();
    this->energy_p = fix.getenergy_p();
    this->at_dmg = fix.getat_dmg();
}

ScavTrap& ScavTrap::operator=(ScavTrap& other)
{
    std::cout << "Assignation ScavTrap operator called" << std::endl;
    this->setname(other.getname());
    this->hit_p = other.gethit_p();
    this->energy_p = other.getenergy_p();
    this->at_dmg = other.getat_dmg();
    return *this;
}

void    ScavTrap::guardGate()
{
    std::cout << PURPLE << "ScavTrap " << this->name
    << " now in Gate keeper mode" << RESET << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    std::cout << GREEN << "ScavTrap " << this->name << " attacks "
    << target << ", causing " << this->at_dmg
    << " points of damage!" << RESET << std::endl;
}
