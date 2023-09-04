/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:09:55 by rene              #+#    #+#             */
/*   Updated: 2023/08/29 22:24:52 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
    // Constructors
    DiamondTrap(void);
    DiamondTrap(std::string const name);
    DiamondTrap(const DiamondTrap &other);
    
    // Assignment operator
    DiamondTrap& operator=(const DiamondTrap &other);

    // Destructor
    ~DiamondTrap(void);

    // Member functions
    void attack(const std::string &target);
    void whoAmI(void);
    
private:
    std::string _name;
};

#endif