#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamond("DiamonD");

    diamond.ScavTrap::attack("Target0");
    diamond.FragTrap::attack("Target01");
    diamond.ClapTrap::attack("Target02");
    diamond.whoAmI();

    std::cout << "Hit Points: " << diamond.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << diamond.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << diamond.getAttackDamage() << std::endl;

    diamond.guardGate();

    return 0;
}
