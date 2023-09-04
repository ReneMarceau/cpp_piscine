/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:46:38 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:46:40 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponType)
    : _name(name), _weaponType(weaponType) {
        return ;
}

HumanA::~HumanA(void) {
    return ;
}

void HumanA::attack(void) const {
    std::cout << this->_name << " attacks with their " << this->_weaponType.getType() << std::endl;
    return ;
}

std::string HumanA::getName(void) const { return this->_name; }

void HumanA::setName(std::string newName) { this->_name = newName; }