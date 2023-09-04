/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:34:22 by rene              #+#    #+#             */
/*   Updated: 2023/08/29 23:44:08 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void)
    : ClapTrap("default_clap_name"), ScavTrap(), FragTrap() {
    this->setName("default");
    this->setHitPoints(FragTrap::_hitPoints);
    this->setEnergyPoints(ScavTrap::_energyPoints);
    this->setAttackDamage(FragTrap::_attackDamage);
    
    std::cout << "DiamondTrap default constructor called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
    this->setName(name);
    this->setHitPoints(FragTrap::_hitPoints);
    this->setEnergyPoints(ScavTrap::_energyPoints);
    this->setAttackDamage(FragTrap::_attackDamage);
    
    std::cout << "DiamondTrap " << this->getName() << " constructor called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other) {
    std::cout << "DiamondTrap copy constructor called on " << other.getName() << std::endl;
    return ;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) {
    ClapTrap::operator=(other);
    ScavTrap::operator=(other);
    FragTrap::operator=(other);
    
    return *this;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap " << this->getName() << " destructor called" << std::endl;
    return ;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
    return ;
}

void DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap name: " << this->getName() << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::getName() + "_clap_name" << std::endl;
    return ;
}
