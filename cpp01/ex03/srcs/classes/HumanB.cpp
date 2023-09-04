/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:46:49 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:46:51 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/HumanB.hpp"

HumanB::HumanB(std::string name)
    : _name(name) {
        this->_weaponType = NULL;
        return ;
}

HumanB::~HumanB(void) {
    return ;
}

void HumanB::attack(void) const {
    std::cout << this->_name << " attacks with their ";
    if (this->_weaponType)
        std::cout << this->_weaponType->getType();
    else
        std::cout << "bare fists";
    std::cout << std::endl;
}

std::string HumanB::getName(void) const { return this->_name; }

void HumanB::setName(std::string newName) { this->_name = newName; }

void HumanB::setWeapon(Weapon &newWeaponType) {
    this->_weaponType = &newWeaponType;
}