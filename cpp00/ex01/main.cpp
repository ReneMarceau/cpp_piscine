/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:32:47 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:32:49 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.hpp"
#include "includes/PhoneBook.hpp"

static void run_program(void) {
    PhoneBook phoneBook;

    while (true) {
        std::string command;
        std::cout << YELLOW << "Enter a command: " << RESET;
        std::getline(std::cin, command);
        
        if (command == "EXIT") {
            print_message("Exiting...", YELLOW);
            break;
        } else if (command == "ADD") {
            phoneBook.addContact();
        } else if (command == "SEARCH") {
            phoneBook.searchContact();
        }
    }
}

int main(void) {
    print_info();
    run_program();
    return 0;
}