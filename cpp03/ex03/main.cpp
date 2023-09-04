/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:55:38 by rene              #+#    #+#             */
/*   Updated: 2023/08/29 23:24:23 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap john;
    DiamondTrap johnny("Johnny");
    DiamondTrap johnnyCopy(johnny);
    DiamondTrap johnnyAssign;
    
    johnnyAssign = johnny;

    johnny.attack("enemy");
    johnny.takeDamage(2);
    johnny.beRepaired(1);
    johnny.highFivesGuys();
    johnny.guardGate();
    johnny.whoAmI();
    
    return (0);
}