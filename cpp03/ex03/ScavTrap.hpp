/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:55:43 by rene              #+#    #+#             */
/*   Updated: 2023/08/29 22:26:52 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    // Constructors
    ScavTrap(void);
    ScavTrap(std::string const name);
    ScavTrap(const ScavTrap &other);

    // Assignment operator
    ScavTrap& operator=(const ScavTrap &other);

    // Destructor
    ~ScavTrap(void);

    // Member functions
    void attack(const std::string &target);
    void guardGate(void);
};

#endif