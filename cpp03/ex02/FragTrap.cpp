/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:02:47 by rene              #+#    #+#             */
/*   Updated: 2023/08/29 00:03:06 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include <iostream>

// Constructors
FragTrap::FragTrap(void)
    : ClapTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
    this->_name = "Default";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return ;
}

FragTrap::FragTrap(std::string const name)
    : ClapTrap(name) {
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return ;
}

FragTrap::FragTrap(const FragTrap &other)
    : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called on " << other.getName() << std::endl;
    return ;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
    ClapTrap::operator=(other);
    return *this;
}

// Destructor
FragTrap::~FragTrap(void) {
    std::cout << "FragTrap " << this->getName() << " destructor called" << std::endl;
    return ;
}

// Member functions
void FragTrap::attack(const std::string &target) {
    std::cout << "FragTrap " << this->getName();
    if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0) {
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        std::cout << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!";
    } else if (this->getHitPoints() <= 0) {
        std::cout << " is dead and cannot attack " << target << "!";
    } else if (this->getEnergyPoints() <= 0) {
        std::cout << " has no energy points and cannot attack " << target << "!";
    }
    std::cout << std::endl;
    return ;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->getName() << " wants to high five you!" << std::endl;
    return ;
}