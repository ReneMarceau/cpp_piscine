/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 03:51:33 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 03:52:03 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    // Constructors
    WrongCat(void);
    WrongCat(const WrongCat &other);

    // Assignment operator
    WrongCat& operator=(const WrongCat &other);
    
    // Destructor
    ~WrongCat(void);

    // Member functions
    void makeSound(void) const;
};