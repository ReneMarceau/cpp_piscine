/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:55:38 by rene              #+#    #+#             */
/*   Updated: 2023/08/29 00:00:38 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    FragTrap john;
    FragTrap johnny("Johnny");
    FragTrap johnnyCopy(johnny);
    FragTrap johnnyAssign;
    
    johnnyAssign = johnny;
    
    johnny.attack("enemy");
    johnny.takeDamage(2);
    johnny.beRepaired(1);
    johnny.highFivesGuys();
    
    return 0;
}