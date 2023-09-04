/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:20:13 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 03:25:49 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal {
public:
    // Constructors
    Animal(void);
    Animal(const Animal &other);

    // Assignment operator
    Animal& operator=(const Animal &other);
    
    // Destructor
    virtual ~Animal(void);

    // Getter
    std::string getType(void) const;

    // Setter
    void setType(std::string newType);
    
    // Member functions
    virtual void makeSound(void) const;

protected:
    std::string _type;
};

