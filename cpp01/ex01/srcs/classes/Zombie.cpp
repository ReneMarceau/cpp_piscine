/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:40:50 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:41:00 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Zombie.hpp"

Zombie::Zombie(void) {
    return ;
}

Zombie::Zombie(std::string name) 
    : _name(name) {
    return ;
}

Zombie::~Zombie(void) {
    std::cout << "Zombie " << this->_name << " has been destroyed!" << std::endl;
    return ;
}

void Zombie::announce(void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

std::string Zombie::getName(void) const { return this->_name; }

void Zombie::setName(std::string name) { this->_name = name; }