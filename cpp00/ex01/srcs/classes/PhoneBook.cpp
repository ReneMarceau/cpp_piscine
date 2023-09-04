/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:31:18 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:31:21 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/header.hpp"
#include "../../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    this->_nbContacts = 0;
    return ;
}

PhoneBook::~PhoneBook(void) {
    return ;
}

void PhoneBook::addContact(void) {
    Contact contact;

    if (fill_contact_form(contact)) {
        if (this->_nbContacts >= 8)
            this->_nbContacts--;
        shift_and_insert(this->_contacts, contact, this->_nbContacts);
        print_message("Contact added successfully", GREEN);
    }
}

void PhoneBook::searchContact(void) {
    int index;

    print_contact_table(this->_contacts, this->_nbContacts);
    if (this->_nbContacts == 0) {
        print_message("No contacts to search", RED);
        return ;
    }
    std::cout << "Enter contact's index to show its informations: ";
    while (!(std::cin >> index) || index < 1 || index > this->_nbContacts) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        print_message("Invalid index. Please enter an index between 1 and " + itoa(this->_nbContacts) + ": ", RED);
    }
    this->_contacts[index - 1].printContact();
    std::cin.ignore(10000, '\n');
}