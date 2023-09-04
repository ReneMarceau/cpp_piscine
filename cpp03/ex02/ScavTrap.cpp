/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:55:46 by rene              #+#    #+#             */
/*   Updated: 2023/08/28 23:43:00 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
    : ClapTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
    
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    return ;
}

ScavTrap::ScavTrap(std::string const name)
    : ClapTrap(name) {
    std::cout << "ScavTrap " << this->getName() << " constructor called" << std::endl;
    
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    return ; 
}

ScavTrap::ScavTrap(const ScavTrap &other)
    : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called on " << other.getName() << std::endl;
    return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {   
    ClapTrap::operator=(other);
    return *this;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << this->getName() << " destructor called" << std::endl;
    return ;
}

void ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap " << this->getName();
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

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode" << std::endl;
    return ;
}