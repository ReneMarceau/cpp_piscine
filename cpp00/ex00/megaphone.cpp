/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:22:21 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:24:25 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

std::string text_upper(std::string text) {
    std::string uppercase_string;

    for (int i = 0; i < (int)text.size(); i++)
        uppercase_string += std::toupper(text[i]);
    return uppercase_string;
}

int main(int argc, char **argv) {
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else {
        for (int i = 1; i < argc; i++)
            std::cout << text_upper(argv[i]);
    }
    std::cout << std::endl;
    return 0;
}