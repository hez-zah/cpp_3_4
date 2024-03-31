#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    this->hit_p = 100;
    this->energy_p = 100;
    this->at_dmg = 30;
    std::cout << "Called FragTrap Constructor" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Called FragTrap Deconstructor" << std::endl;
}

FragTrap::FragTrap(FragTrap& fix)
{
    std::cout << "Copy FragTrap constructor called" << std::endl;
    this->setname(fix.getname() + "_copy");
    this->hit_p = fix.gethit_p();
    this->energy_p = fix.getenergy_p();
    this->at_dmg = fix.getat_dmg();
}

FragTrap& FragTrap::operator=(FragTrap& other)
{
    std::cout << "Assignation FragTrap operator called" << std::endl;
    this->setname(other.getname());
    this->hit_p = other.gethit_p();
    this->energy_p = other.getenergy_p();
    this->at_dmg = other.getat_dmg();
    return *this;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " giv high five" << std::endl;
}
