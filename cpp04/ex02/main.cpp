/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:56:38 by rene              #+#    #+#             */
/*   Updated: 2023/08/30 19:06:23 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AAnimal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/Brain.hpp"

#include <iostream>
#include <iomanip>

int main(void) {
    AAnimal *meta[10];

    for (int i = 0; i < 10; i++) {   
        if (i <= 50)
            meta[i] = new Dog();
        else
            meta[i] = new Cat();
    }
    Cat copy(*(Cat *)meta[0]);
    std::cout << std::endl;

    for (int i = 0; i < 100; i++)
	{
		std::cout << std::setw(30) << std::left << copy.getBrain()->getIdea(i);
		std::cout << std::setw(30) << std::left << ((Cat *)meta[0])->getBrain()->getIdea(i) << std::endl;
	}
    
    std::cout << std::endl;

    for (int i = 0; i < 10; i++)
        delete meta[i];

    return 0;
}