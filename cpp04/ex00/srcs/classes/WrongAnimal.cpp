/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 03:46:54 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 03:54:27 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

// Constructors
WrongAnimal::WrongAnimal(void)
    : _type("WrongAnimal") {
    std::cout << "WrongAnimal class default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
    : _type(other._type) {
    std::cout << "WrongAnimal class copy constructor called" << std::endl;
}

// Assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
    this->setType(other._type);
    return *this;
}

// Destructor
WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal class destructor called" << std::endl;
}

// Member functions
std::string WrongAnimal::getType(void) const {
    return this->_type;
}

void WrongAnimal::setType(std::string newType) {
    this->_type = newType;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal class sound" << std::endl;
}