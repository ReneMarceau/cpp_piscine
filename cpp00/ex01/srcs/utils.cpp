/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:32:34 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:32:36 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.hpp"

std::string itoa(int i) {
    std::stringstream ss;
    ss << i;
    return ss.str();
}

std::string truncate(std::string str) {
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void print_message(const std::string message, const std::string color) {
    std::cout << color << message << RESET << std::endl;
}

bool input(const std::string prompt, std::string &input) {
    std::cout << prompt;
    std::getline(std::cin, input);
    if (input.empty()) {
        print_message("This field cannot be empty!", RED);
        return false;
    }
    return true;
}