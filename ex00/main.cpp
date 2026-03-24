#include "ClapTrap.hpp"

int main() 
{
    ClapTrap claptrap("SeveruS");

    claptrap.attack("Target0");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("Target1");
    claptrap.takeDamage(10);
    claptrap.beRepaired(5);

    return 0;
}
