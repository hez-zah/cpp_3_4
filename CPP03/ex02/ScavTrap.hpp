#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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
