/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:55:13 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 06:15:36 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Dog.hpp"

#include <iostream>

// Constructors
Dog::Dog(void)
    : Animal(), _brain(new Brain()) {
    this->setType("Dog");
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
    : Animal(other), _brain(new Brain(*other._brain)) {
    this->setType(other.getType());
    std::cout << "Dog copy constructor called" << std::endl;
}

// Assignment operator
Dog& Dog::operator=(const Dog &other) {
    this->setType(other.getType());
    this->_brain = new Brain(*other._brain);
    return *this;
}

// Destructor
Dog::~Dog(void) {
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}

// Member functions
Brain *Dog::getBrain(void) const {
    return this->_brain;
}

void Dog::makeSound(void) const {
    std::cout << this->getType() << " barks!" << std::endl;
}