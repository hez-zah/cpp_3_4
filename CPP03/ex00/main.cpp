#include "ClapTrap.hpp"

int main()
{
    ClapTrap cl("rafayel");
    ClapTrap bl("donatelo");

    std::cout << std::endl;
    cl.attack("donatelo");
    cl.takeDamage(5);
    cl.beRepaired(15);

    std::cout << std::endl;
    bl.attack("rafayel");
    bl.takeDamage(6);
    cl.beRepaired(9);
    bl.takeDamage(4);
    bl.takeDamage(1);

    std::cout << std::endl;
}
