/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:28:02 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 03:13:57 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Animal.hpp"

#include <iostream>

// Constructors
Animal::Animal()
    : _type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
    : _type(other._type) {
    std::cout << "Animal copy constructor called" << std::endl;        
}

// Assignment operator
Animal& Animal::operator=(const Animal &other) {
    this->setType(other._type);
    return *this;
}

// Destructor
Animal::~Animal(void) {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const {
    return this->_type;
}

void Animal::setType(std::string newType) {
    this->_type = newType;
}

void Animal::makeSound(void) const {
    std::cout << "Animal sound" << std::endl;
}