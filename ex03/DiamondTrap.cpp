#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap " << name << " Default  Constructor Created ! " << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 30;
    std::cout << "DiamondTrap " << this->name << " created!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destroyed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {
    std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "Diamond oparator assigment" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);

        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

unsigned int DiamondTrap::getHitPoints() const {
    return hitPoints;
}

unsigned int DiamondTrap::getEnergyPoints() const {
    return energyPoints;
}

unsigned int DiamondTrap::getAttackDamage() const {
    return attackDamage;
}