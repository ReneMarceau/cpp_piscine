/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 05:36:48 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 06:01:30 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Brain.hpp"

#include <iostream>
#include <cstdlib>

// Constructors
Brain::Brain(void) {
    const std::string ideas[6] = {
        "I want to sleep",
		"I want food",
		"I want pets",
		"I want to go for a walk",
		"I want water",
		"I want a treat"
    };
    
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = ideas[rand() % 6];
    
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
    std::cout << "Brain copy constructor called" << std::endl;
}

// Assignment operator
Brain& Brain::operator=(const Brain &other) {
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
    return *this;
}

// Destructor
Brain::~Brain(void) {
    std::cout << "Brain destructor called" << std::endl;
}

// Member functions
const std::string& Brain::getIdea(int index) const {
    return this->_ideas[index];
}

void Brain::setIdea(const std::string newIdea, int index) {
    this->_ideas[index] = newIdea;
}