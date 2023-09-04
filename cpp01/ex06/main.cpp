/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:45:16 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 21:47:13 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Usage: ./HarlFilter <level>" << std::endl;
        return 1;
    }
    Harl harl;
    
    harl.complain(argv[1]);
    return 0;
}