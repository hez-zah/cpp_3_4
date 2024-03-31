#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

// class FragTrap;

class ScavTrap : virtual public ClapTrap
{
    public :
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(ScavTrap& fix);
        ScavTrap& operator=(ScavTrap& other);
        void    guardGate();
        void    attack(const std::string& target);
};




#endif
