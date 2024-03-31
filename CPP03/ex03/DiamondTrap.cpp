#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):FragTrap(name +  "_clap_name"),
ScavTrap(name +  "_clap_name")
{
    std::cout << "Called DiamondTrap Constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Called DiamondTrap Deconstructor" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& fix):FragTrap(fix.getname()),ScavTrap(fix.getname())
{
    std::cout << "Copy DiamondTrap constructor called" << std::endl;
    this->_name = fix.getname();
}
DiamondTrap& DiamondTrap::operator=(DiamondTrap& other)
{
    std::cout << "Assignation DiamondTrap operator called" << std::endl;
    this->_name = other.getname();
    return *this;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "Name of DiamondTrap is " << this->_name << std::endl;
}
