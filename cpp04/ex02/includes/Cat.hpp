/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:41:21 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 19:02:50 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
public:
    // Constructors
    Cat(void);
    Cat(const Cat &other);

    // Assignment operator
    Cat& operator=(const Cat &other);
    
    // Destructor
    ~Cat(void);

    // Getter
    Brain *getBrain(void) const;

    // Member functions
    void makeSound(void) const;

private:
    Brain *_brain;
};