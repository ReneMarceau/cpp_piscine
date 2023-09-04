/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:42:29 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:42:31 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
    std::string string = "HI THIS IS BRAIN";

    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "Adress in stringPTR: " << stringPTR << std::endl;
    std::cout << "Adress in stringREF: " << &stringREF << std::endl;

    std::cout << "Value in stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value in stringREF: " << stringREF << std::endl;
    return 0;
}