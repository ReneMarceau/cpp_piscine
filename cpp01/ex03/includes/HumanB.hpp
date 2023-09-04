/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:46:08 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:46:10 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>

#include "Weapon.hpp"

class HumanB {
public:
    // Constructor & Destructor
    HumanB(std::string name);
    ~HumanB(void);

    void attack(void) const;

    // Getter
    std::string getName(void) const;

    //Setters
    void setName(std::string newName);
    void setWeapon(Weapon &newWeaponType);

private:
    std::string _name;
    Weapon *_weaponType;
};

#endif