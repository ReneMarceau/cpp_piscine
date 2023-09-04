/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:54:29 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 03:17:48 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal{
public:
    // Constructors
    Dog(void);
    Dog(const Dog &other);

    // Assignment operator
    Dog& operator=(const Dog &other);
    
    // Destructor
    ~Dog(void);

    // Member functions
    void makeSound(void) const;
};