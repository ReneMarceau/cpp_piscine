/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:31:52 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:31:54 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.hpp"
#include "../includes/PhoneBook.hpp"

void print_info(void) {
    print_message("Welcome to the " + (std::string)MAGENTA + "PhoneBook 2000!", WHITE);
    print_message("You can use the following commands:", WHITE);
    print_message("ADD" + (std::string)WHITE + ": Add a new contact", CYAN);
    print_message("SEARCH" + (std::string)WHITE + ": Search for a contact", CYAN);
    print_message("EXIT" + (std::string)WHITE + ": Exit the program", RED);
}

void shift_and_insert(Contact (&contacts)[8], Contact &contact, int &nb_contacts) {
    for (int i = nb_contacts; i > 0; i--)
        contacts[i] = contacts[i - 1];
    contacts[0] = contact;
    nb_contacts++;
}

void print_contact_table(Contact (&contacts)[8], int nb_contacts) {
    std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
    std::cout << "│" << std::setw(10) << std::right << "index";
	std::cout << "│" << std::setw(10) << std::right << "first name";
	std::cout << "│" << std::setw(10) << std::right << "last name";
	std::cout << "│" << std::setw(10) << std::right << "nickname" << "│" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;

    for (int i = 0; i < nb_contacts; i++) {
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(contacts[i].getFirstName());
		std::cout << "|" << std::setw(10) << truncate(contacts[i].getLastName());
		std::cout << "|" << std::setw(10) << truncate(contacts[i].getNickname()) << "|" << std::endl;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
}

bool fill_contact_form(Contact &contact) {
    std::string field_names[] = {
        "first name",
        "last name",
        "nickname",
        "phone number",
        "darkest secret"
    };
    int field_count = sizeof(field_names) / sizeof(field_names[0]);

    for (int i = 0; i < field_count; i++) {
        std::string user_input;
        if (!input("Enter contact's " + field_names[i] + ": ", user_input))
            return false;

        if (field_names[i] == "first name")
            contact.setFirstName(user_input);
        else if (field_names[i] == "last name")
            contact.setLastName(user_input);
        else if (field_names[i] == "nickname")
            contact.setNickname(user_input);
        else if (field_names[i] == "phone number")
            contact.setPhoneNumber(user_input);
        else if (field_names[i] == "darkest secret")
            contact.setDarkestSecret(user_input);
    }
    return true;
}