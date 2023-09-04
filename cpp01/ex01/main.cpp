/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:41:22 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:41:24 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int main(void) {
    int zombieNum = 5;
    Zombie *zombies = zombieHorde(zombieNum, "Fred");
    
    for (int i = 0; i < zombieNum; i++)
        zombies[i].announce();
    delete[] zombies;
    return 0;
}