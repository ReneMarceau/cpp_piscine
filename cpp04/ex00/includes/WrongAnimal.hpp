/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 03:47:04 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 03:49:45 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class WrongAnimal {
public:
    // Constructors
    WrongAnimal(void);
    WrongAnimal(const WrongAnimal &other);

    // Assignment operator
    WrongAnimal& operator=(const WrongAnimal &other);
    
    // Destructor
    virtual ~WrongAnimal(void);

    // Getter
    std::string getType(void) const;

    // Setter
    void setType(std::string newType);
    
    // Member functions
    void makeSound(void) const;

protected:
    std::string _type;  
};