/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:31:07 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:31:09 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/header.hpp"
#include "../../includes/Contact.hpp"

Contact::Contact(void) {
    return ;
}

Contact::~Contact(void) {
    return;
}

void Contact::printContact(void) {
    print_message("First name: " + (std::string)CYAN + this->_firstName, WHITE);
    print_message("Last name: " + (std::string)CYAN + this->_lastName, WHITE);
    print_message("Nickname: " + (std::string)CYAN + this->_nickname, WHITE);
    print_message("Phone number: " + (std::string)BLUE + this->_phoneNumber, WHITE);
    print_message("Darkest secret: " + (std::string)RED + this->_darkestSecret, WHITE);
}

std::string Contact::getFirstName(void) const { return this->_firstName; }
std::string Contact::getLastName(void) const { return this->_lastName; }
std::string Contact::getNickname(void) const { return this->_nickname; }
std::string Contact::getPhoneNumber(void) const { return this->_phoneNumber; }
std::string Contact::getDarkestSecret(void) const { return this->_darkestSecret; }

void Contact::setFirstName(std::string firstName) { this->_firstName = firstName; }
void Contact::setLastName(std::string lastName) { this->_lastName = lastName; }
void Contact::setNickname(std::string nickname) { this->_nickname = nickname; }
void Contact::setPhoneNumber(std::string phoneNumber) { this->_phoneNumber = phoneNumber; }
void Contact::setDarkestSecret(std::string darkestSecret) { this->_darkestSecret = darkestSecret; }