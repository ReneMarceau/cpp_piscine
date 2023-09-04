/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:55:10 by rene              #+#    #+#             */
/*   Updated: 2023/08/28 23:19:38 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(void)
    : _name("John Doe"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
    return ;    
}

ClapTrap::ClapTrap(std::string const name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << this->getName() << " constructor called" << std::endl;
    return ;        
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : _name(other.getName()), _hitPoints(other.getHitPoints()), _energyPoints(other.getEnergyPoints()), _attackDamage(other.getAttackDamage()) {
    std::cout << "ClapTrap copy constructor called on " << other.getName() << std::endl;
    return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
    this->setName(other.getName());
    this->setHitPoints(other.getHitPoints());
    this->setEnergyPoints(other.getEnergyPoints());
    this->setAttackDamage(other.getAttackDamage());
    std::cout << "ClapTrap assignment operator called on " << other.getName() << std::endl;
    return *this;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap " << this->getName() << " destructor called" << std::endl;
    return ;
}

std::string ClapTrap::getName(void) const {
    return this->_name;
}

unsigned int ClapTrap::getHitPoints(void) const {
    return this->_hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const {
    return this->_energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const {
    return this->_attackDamage;
}

void ClapTrap::setName(std::string const name) {
    this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int const hitPoints) {
    this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int const energyPoints) {
    this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int const attackDamage) {
    this->_attackDamage = attackDamage;
}

void ClapTrap::attack(const std::string &target) {
    std::cout << "ClapTrap " << this->getName();
    if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0) {
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        std::cout << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!";
    } else if (this->getHitPoints() <= 0) {
        std::cout << " is dead and cannot attack " << target << "!";
    } else if (this->getEnergyPoints() <= 0) {
        std::cout << " has no energy points and cannot attack " << target << "!";
    }
    std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << this->getName();
    if (this->getHitPoints() > 0) {
        std::cout << " takes " << amount << " damage" << (amount > 1 ? "s" : "");
        if (amount < this->getHitPoints()) {
            this->setHitPoints(this->getHitPoints() - amount);
            std::cout << ", " << this->getHitPoints() << " hp remaining!";
        } else {
            this->setHitPoints(0);
            std::cout << " and dies!";
        }
    } else {
        std::cout << " is already dead!";
    }
    std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << this->getName();
    if (this->getEnergyPoints() > 0) {
        this->setHitPoints(this->getHitPoints() + amount);
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        std::cout << " is repaired for " << amount << " hp, now at " << this->getHitPoints() << " hp!";
    } else {
        std::cout << " has no energy points and cannot be repaired!";
    }
    std::cout << std::endl;
}