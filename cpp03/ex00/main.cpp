/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 05:27:53 by rene              #+#    #+#             */
/*   Updated: 2023/08/26 05:44:28 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap john;
    ClapTrap johnny("Johnny");
    ClapTrap johnnyCopy(johnny);
    ClapTrap johnnyAssign;
    
    johnnyAssign = johnny;

    johnny.attack("enemy");
    johnny.takeDamage(2);
    johnny.beRepaired(1);
    return 0;
}