#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

//hybird inheritance
//        A
//       / \. 
//      B   C
//       \ /
//        D

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;
    public:
        using FragTrap::hit_p;
        using ScavTrap::energy_p;
        using FragTrap::at_dmg;
        using ScavTrap::attack;
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap(DiamondTrap& fix);
        DiamondTrap& operator=(DiamondTrap& other);
        void    whoAmI();
};


#endif
