/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:41:21 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 03:17:44 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal{
public:
    // Constructors
    Cat(void);
    Cat(const Cat &other);

    // Assignment operator
    Cat& operator=(const Cat &other);
    
    // Destructor
    ~Cat(void);

    // Member functions
    void makeSound(void) const;
};