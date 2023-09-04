/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:48:39 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 19:03:48 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Cat.hpp"

#include <iostream>

// Constructors
Cat::Cat(void)
    : AAnimal(), _brain(new Brain()) {
    this->setType("Cat");
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
    : AAnimal(other), _brain(new Brain(*other._brain)) {
    this->setType(other.getType());
    std::cout << "Cat copy constructor called" << std::endl;
}

// Assignment operator
Cat& Cat::operator=(const Cat &other) {
    this->setType(other.getType());
    this->_brain = new Brain(*other._brain);
    return *this;
}

// Destructor
Cat::~Cat(void) {
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}

// Member functions
Brain *Cat::getBrain(void) const {
    return this->_brain;
}

void Cat::makeSound(void) const {
    std::cout << this->getType() << " meows!" << std::endl;
}