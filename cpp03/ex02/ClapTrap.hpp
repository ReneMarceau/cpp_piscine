/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:54:36 by rene              #+#    #+#             */
/*   Updated: 2023/08/28 23:19:44 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
public:
    // Constructors
    ClapTrap(void);
    ClapTrap(std::string const name);
    ClapTrap(const ClapTrap &other);

    // Assignment operator
    ClapTrap& operator=(const ClapTrap &other);

    // Destructor
    ~ClapTrap(void);

    // Member functions
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
    
    //Getters
    std::string getName(void) const;
    unsigned int getHitPoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getAttackDamage(void) const;
    
    //Setters
    void setName(std::string const name);
    void setHitPoints(unsigned int const hitPoints);
    void setEnergyPoints(unsigned int const energyPoints);
    void setAttackDamage(unsigned int const attackDamage);
};

#endif