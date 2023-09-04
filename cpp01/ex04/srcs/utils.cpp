/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:14:47 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 17:36:20 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/base.hpp"

void print_message(const std::string message, const std::string color) {
    std::cout << color << message << RESET << std::endl;
}

bool is_file(const char *fileName) {
    std::ifstream file(fileName);

    if (file.is_open() && file.good()) {
        file.close();
        return true;
    }
    print_message(ERR_FILE, RED);
    return false;
}

bool is_file_empty(const char *fileName) {
    std::ifstream file(fileName);

    file.seekg(0, std::ios::end);
    if (file.tellg() == 0) {
        print_message(ERR_EMPTY, RED);
        file.close();
        return true;
    }
    file.close();
    return false;
}

std::string replaceSubstring(const std::string &source, const std::string &search, const std::string &replace) {
    std::string result;
    size_t pos = 0;
    size_t foundPos = 0;

    while ((foundPos = source.find(search, pos)) != std::string::npos) {
        result += source.substr(pos, foundPos - pos);
        result += replace;
        pos = foundPos + search.length();
    }
    if (pos < source.length())
        result += source.substr(pos);
    return result;
}