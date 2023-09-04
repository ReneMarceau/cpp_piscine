/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:48:39 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 03:14:16 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Cat.hpp"

#include <iostream>

// Constructors
Cat::Cat(void)
    : Animal() {
    this->setType("Cat");
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
    : Animal(other) {
    this->setType(other.getType());
    std::cout << "Cat copy constructor called" << std::endl;
}

// Assignment operator
Cat& Cat::operator=(const Cat &other) {
    this->setType(other.getType());
    return *this;
}

// Destructor
Cat::~Cat(void) {
    std::cout << "Cat destructor called" << std::endl;
}

// Member functions
void Cat::makeSound(void) const {
    std::cout << this->getType() << " meows!" << std::endl;
}