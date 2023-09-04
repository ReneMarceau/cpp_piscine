/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:45:56 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:45:58 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>

# include "Weapon.hpp"  

class HumanA {
public:
    // Constructor & Destructor
    HumanA(std::string name, Weapon &weaponType);
    ~HumanA(void);

    void attack(void) const;

    // Getter
    std::string getName(void) const;

    // Setter
    void setName(std::string newName);

private:
    std::string _name;
    Weapon &_weaponType;
};

#endif