#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

// class ScavTrap;

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(FragTrap& fix);
        FragTrap& operator=(FragTrap& other);
        void    highFivesGuys();
};


#endif
