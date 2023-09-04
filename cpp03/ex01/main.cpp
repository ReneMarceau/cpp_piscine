/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:55:38 by rene              #+#    #+#             */
/*   Updated: 2023/08/28 23:41:58 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    ScavTrap john;
    ScavTrap johnny("Johnny");
    ScavTrap johnnyCopy(johnny);
    ScavTrap johnnyAssign;
    
    johnnyAssign = johnny;
    
    johnny.attack("enemy");
    johnny.takeDamage(2);
    johnny.beRepaired(1);
    johnny.guardGate();
    
    return 0;
}