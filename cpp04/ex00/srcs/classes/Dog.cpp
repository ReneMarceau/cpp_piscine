/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:55:13 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 03:05:57 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Dog.hpp"

#include <iostream>

// Constructors
Dog::Dog(void)
    : Animal() {
    this->setType("Dog");
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
    : Animal(other) {
    this->setType(other.getType());
    std::cout << "Dog copy constructor called" << std::endl;
}

// Assignment operator
Dog& Dog::operator=(const Dog &other) {
    this->setType(other.getType());
    return *this;
}

// Destructor
Dog::~Dog(void) {
    std::cout << "Dog destructor called" << std::endl;
}

// Member functions
void Dog::makeSound(void) const {
    std::cout << this->getType() << " barks!" << std::endl;
}