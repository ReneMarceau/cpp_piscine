/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:28:02 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 19:08:45 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/AAnimal.hpp"

#include <iostream>

// Constructors
AAnimal::AAnimal()
    : _type("AAnimal") {
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
    : _type(other._type) {
    std::cout << "AAnimal copy constructor called" << std::endl;        
}

// Assignment operator
AAnimal& AAnimal::operator=(const AAnimal &other) {
    this->setType(other._type);
    return *this;
}

// Destructor
AAnimal::~AAnimal(void) {
    std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType(void) const {
    return this->_type;
}

void AAnimal::setType(std::string newType) {
    this->_type = newType;
}