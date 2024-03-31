#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::string s1 = "GrayMatter";
    std::string s2 = "HeatBlast";
    std::string s3 = "Fourarms";

    std::cout << "###TEST--->Claptrap<----####" << std::endl;
    ClapTrap cl(s1);
    cl.attack(s2);
    cl.takeDamage(20);
    cl.beRepaired(25);
    std::cout << "\n###TEST--->ScavTrap<----####" << std::endl;
    ScavTrap sc(s2);
    sc.attack(s3);
    sc.takeDamage(15);
    sc.beRepaired(8);
    sc.guardGate();
    std::cout << "\n###TEST--->ScavTrap<----####" << std::endl;
    FragTrap fr(s3);
    fr.attack(s2);
    fr.takeDamage(6);
    fr.beRepaired(10);
    fr.highFivesGuys();
    std::cout << std::endl;
}
