/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:20:13 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 19:01:39 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class AAnimal {
public:
    // Constructors
    AAnimal(void);
    AAnimal(const AAnimal &other);

    // Assignment operator
    AAnimal& operator=(const AAnimal &other);
    
    // Destructor
    virtual ~AAnimal(void);

    // Getter
    std::string getType(void) const;

    // Setter
    void setType(std::string newType);
    
    // Member functions
    virtual void makeSound(void) const = 0;

protected:
    std::string _type;
};

