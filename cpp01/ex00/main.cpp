/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:38:56 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:38:58 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int main(void) {
    Zombie *zombie = newZombie("Alfred");

    zombie->announce();
    randomChump("Marie");
    delete zombie;

    return 0;
}