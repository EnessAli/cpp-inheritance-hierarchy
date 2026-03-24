#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap claptrap("SeveruS");
    claptrap.attack("Target0");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("Target1");
    claptrap.takeDamage(10);
    claptrap.beRepaired(5);

    std::cout << std::endl << std::endl;

    ScavTrap scavtrap("NickName");
    scavtrap.attack("Target2");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();
    scavtrap.attack("Target3");
    scavtrap.takeDamage(100);
    scavtrap.beRepaired(5);
    
    std::cout << std::endl << std::endl;

    return 0;
}
