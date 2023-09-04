/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 03:55:07 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 03:56:43 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/WrongCat.hpp"

#include <iostream>

// Constructors
WrongCat::WrongCat(void)
    : WrongAnimal() {
    this->setType("WrongCat");
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
    : WrongAnimal(other) {
    this->setType(other.getType());
    std::cout << "WrongCat copy constructor called" << std::endl;
}

// Assignment operator
WrongCat& WrongCat::operator=(const WrongCat &other) {
    this->setType(other.getType());
    return *this;
}

// Destructor
WrongCat::~WrongCat(void) {
    std::cout << "WrongCat destructor called" << std::endl;
}

// Member functions
void WrongCat::makeSound(void) const {
    std::cout << this->getType() << " meows!" << std::endl;
}