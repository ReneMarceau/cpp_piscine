/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:54:29 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 06:15:15 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
public:
    // Constructors
    Dog(void);
    Dog(const Dog &other);

    // Assignment operator
    Dog& operator=(const Dog &other);
    
    // Destructor
    ~Dog(void);

    // Getter
    Brain *getBrain(void) const;

    // Member functions
    void makeSound(void) const;

private:
    Brain *_brain;
};