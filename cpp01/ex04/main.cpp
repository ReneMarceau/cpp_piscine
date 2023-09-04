/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:14:59 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 17:36:27 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/base.hpp"

void replace(std::string fileName, std::string toFind, std::string toReplace) {
    std::string line;
    std::ifstream infile(fileName.c_str());
    std::ofstream outfile(fileName.append(".replace").c_str());
    
    while (std::getline(infile, line)) {
        outfile << replaceSubstring(line, toFind, toReplace);
        if (!infile.eof())
            outfile << std::endl;
    }
    infile.close();
    outfile.close();
}

int main(int argc, char **argv) {
    if (argc != 4) {
        print_message(ERR_ARG_COUNT, RED);
        return FAILURE;
    }
    if (!is_file(argv[1]) || is_file_empty(argv[1]))
        return FAILURE;

    replace(argv[1], argv[2], argv[3]);
    return SUCCESS;
}