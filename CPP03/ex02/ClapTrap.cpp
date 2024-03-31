#include "ClapTrap.hpp"

//constructor
ClapTrap::ClapTrap():name(""),hit_p(10),energy_p(10),at_dmg(0)
{
    std::cout << "Called ClapTrap Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name),hit_p(10),energy_p(10),at_dmg(0)
{
    std::cout << "Called ClapTrap constructor" << std::endl;
}

//Deconstructor
ClapTrap::~ClapTrap()
{
    std::cout << "Called ClapTrap Deconstructor" << std::endl;
}

//Copy constructor
ClapTrap::ClapTrap(ClapTrap& fix)
{
    std::cout << "Copy ClapTrap constructor called" << std::endl;
    this->setname(fix.getname() + "_copy");
    this->hit_p = fix.gethit_p();
    this->energy_p = fix.getenergy_p();
    this->at_dmg = fix.getat_dmg();
}

ClapTrap& ClapTrap::operator=(ClapTrap& other)
{
    std::cout << "Assignation ClapTrap operator called" << std::endl;
    this->setname(other.getname());
    this->hit_p = other.gethit_p();
    this->energy_p = other.getenergy_p();
    this->at_dmg = other.getat_dmg();
    return *this;
}

// member fonctions 
void    ClapTrap::attack(const std::string& target)
{
    if (this->hit_p && this->energy_p)
    {
        this->energy_p--;
        std::cout << CYAN << "ClapTrap " << this->name << " attacks "
        << target << ", causing " << this->at_dmg
        << " points of damage!" << RESET << std::endl;
    }
    else
        std::cout << YELLOW << "ClapTrap " << this->name << "can't attack "
        << "be couse energy point or hit point is expected" << RESET << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (!this->hit_p)
    {
        std::cout << BRED << "ClapTrap " << this->name << " is dead....." << RESET << std::endl;
        return ;
    }
    this->hit_p > amount ? this->hit_p -= amount : this->hit_p = 0;
    if (!this->hit_p)
        return ;
    std::cout << "ClapTrap " << this->name << " lose " << amount << " hit point "
    "now has " << BLUE << this->hit_p  << " hit point " << RESET << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->hit_p || !this->energy_p)
    {
        std::cout << YELLOW << "ClapTrap " << this->name 
        << " can't repairs itself "
        << "cousing energy point or hit point is expected" << RESET << std::endl;
        return ;
    }
    this->hit_p += amount;
    this->energy_p--;
    std::cout << RED << "ClapTrap " << this->name << " Add him self " << amount << " hit point to repairs itself" << RESET << std::endl;
}

//seter
void    ClapTrap::setname(std::string name)
{
    this->name = name;
}

void    ClapTrap::sethit_p(unsigned int hit)
{
    this->hit_p = hit;
}

void    ClapTrap::setenergy_p(unsigned int energ)
{
    this->energy_p = energ;
}

void    ClapTrap::setat_dmg(unsigned int dmg)
{
    this->at_dmg = dmg;
}

//geter
std::string  ClapTrap::getname()
{
    return this->name;
}

unsigned int ClapTrap::gethit_p()
{
    return (this->hit_p);
}

unsigned int ClapTrap::getenergy_p()
{
    return (this->energy_p);
}

unsigned int ClapTrap::getat_dmg()
{
    return (this->energy_p);
}
