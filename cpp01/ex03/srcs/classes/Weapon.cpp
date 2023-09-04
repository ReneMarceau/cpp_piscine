/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:47:01 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:47:03 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Weapon.hpp"

Weapon::Weapon(std::string type)
    : _type(type) {
        return ;
}

Weapon::~Weapon(void) {
    return ;
}

const std::string &Weapon::getType(void) const {
    return this->_type;
}

void Weapon::setType(std::string newType) { this->_type = newType; }