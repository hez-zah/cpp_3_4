#include "DiamondTrap.hpp"

int main()
{
    std::string s1 = "GrayMatter";
    std::string s2 = "HeatBlast";
    std::string s3 = "Fourarms";
    std::string s4 = "godziila";
    DiamondTrap dm(s4);

    //attacks
    std::cout << std::endl;
    dm.attack(s3);
    dm.attack(s2);
    dm.attack(s1);
    //takeDamage
    std::cout << std::endl;
    dm.takeDamage(5);
    dm.takeDamage(7);
    //repaired 
    dm.beRepaired(20);
    dm.beRepaired(14);
    //member function scavtrap tto diamondtrap
    dm.guardGate();
    //member function fragtrap tto diamondtrap
    dm.highFivesGuys();
    //takeDamage
    dm.takeDamage(88);
    dm.takeDamage(35);
    //die
    dm.takeDamage(5);
    std::cout << std::endl;
}
